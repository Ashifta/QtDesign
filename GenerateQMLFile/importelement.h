
#ifndef IMPORTELEMENT_H
#define IMPORTELEMENT_H

#include <QVariant>
#include "iserializecomponent.h"


/**
 * @brief This class holds as a container for import names.
 *
 */
class ImportElement : public ISerializeComponent
{
public:

    ~ImportElement();


    /**
     * @brief
     *
     * @param uri - uri to import components.
     * @param major - major version number.
     * @param minor - minor version number.
     */
    ImportElement(const QVariant uri, const short major, const short minor);

    /**
     * @brief  In our case the "Operation is" serialize.
     *
     * @param data serialize opearation.
     */
    virtual void serialize(QByteArray& data);

private:
    const QVariant m_uri; /**Holds uri*/
    const short m_major; /**Holds major */
    const short m_minor; /**Holds minoe */
    const char* IMPORTNAME="import";

};

#endif // IMPORTELEMENT_H
