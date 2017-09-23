#include <QtDebug>
#include "importelement.h"


ImportElement::~ImportElement()
{
    qDebug()<< Q_FUNC_INFO;
}

ImportElement::ImportElement(const QVariant uri, const short major, const short minor)
    :m_uri(uri)
    ,m_major(major)
    ,m_minor(minor)
{
    
}

void ImportElement::serialize(QByteArray &data)
{
    data.append(IMPORTNAME);
    data.append(" ");
    data.append(m_uri.toByteArray());
    data.append(" ");
    data.append(QByteArray::number(m_major));
    data.append(".");
    data.append(QByteArray::number(m_minor));
}
