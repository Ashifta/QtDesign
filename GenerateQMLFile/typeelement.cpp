#include "typeelement.h"
#include "importelement.h"

TypeElement::TypeElement(const QVariant& typeName,const bool isRoot )
    :m_typeName(typeName)
    ,m_isRoot(isRoot)
{

}

void TypeElement::serialize(QByteArray &data)
{
    if( m_isRoot)
    {
        foreach( ISerializeComponent* import , m_imports)
        {
            import->serialize(data);
            data.append("\n");
        }
    }

    data.append("\n");
    data.append(m_typeName.toByteArray());
    data.append("\n");
    data.append(M_OPENELEMENT);


    foreach( ISerializeComponent* child , m_childs)
    {
        child->serialize(data);
    }
    data.append("\n");
    data.append(M_CLOSEELEMENT);
}

void TypeElement::addImport(ISerializeComponent* comp)
{
    m_imports.append(comp);
}


void TypeElement::add(ISerializeComponent * comp)
{
    if(!m_childs.contains(comp))
    {
        m_childs.append(comp);
    }
}

void TypeElement::remove(ISerializeComponent * comp)
{
  if(m_childs.contains(comp))
  {
      int index = m_childs.indexOf(comp);
      ISerializeComponent* item = m_childs.takeAt(index);
      delete item;
  }
}



