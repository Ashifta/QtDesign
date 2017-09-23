#include <QtDebug>
#include "typeelement.h"
#include "importelement.h"

TypeElement::TypeElement(const QVariant& typeName,const bool isRoot )
    :m_typeName(typeName)
    ,m_isRoot(isRoot)
{

}

TypeElement::~TypeElement()
{
    qDebug()<< Q_FUNC_INFO;
}

void TypeElement::serialize(QByteArray &data)
{
    if( m_isRoot)
    {
        foreach( ISerializeComponent_prt import , m_imports)
        {
            import->serialize(data);
            data.append("\n");
        }
    }

    data.append("\n");
    data.append(m_typeName.toByteArray());
    data.append("\n");
    data.append(M_OPENELEMENT);


    foreach( ISerializeComponent_prt child , m_childs)
    {
        child->serialize(data);
    }
    data.append("\n");
    data.append(M_CLOSEELEMENT);
}

void TypeElement::addImport(ISerializeComponent_prt comp)
{
    if(m_imports.contains(comp))
    {
        m_imports.append(comp);
    }
}


void TypeElement::add(ISerializeComponent_prt comp)
{
    if(!m_childs.contains(comp))
    {
        m_childs.append(comp);
    }
}

void TypeElement::remove(ISerializeComponent_prt comp)
{
  if(m_childs.contains(comp))
  {
      int index = m_childs.indexOf(comp);
       m_childs.takeAt(index);
       ///No explicit delete, since se use std::shared_ptr.
  }
}



