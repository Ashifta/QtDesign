#ifndef TYPEELEMENT_H
#define TYPEELEMENT_H

#include <QByteArray>
#include <QVariant>
#include "iserializecomponent.h"

/**
 * @brief Hold the try of qml element.
 *
 */
class TypeElement : public ISerializeComponent
{
public:

    /**
     * @brief
     *
     * @param data
     */
    virtual void serialize(QByteArray& data);
    /**
     * @brief
     *
     * @param comp - to add import type, which can be multiple imports.
     */
    void addImport(ISerializeComponent* comp);
    /**
     * @brief
     *
     * @param add child element.
     */
    virtual void add( ISerializeComponent* );
    /**
     * @brief
     *
     * @param remove child element.
     */
    virtual void remove(  ISerializeComponent* );
    /**
     * @brief
     *
     * @param typeName - name of the qml type
     * @param isRoot - specify is this root or not.
     */
    TypeElement(const QVariant& typeName, const bool isRoot = false);
private:

    const char* M_OPENELEMENT = "{"; /**< TODO: describe */
    const char* M_CLOSEELEMENT = "}"; /**< TODO: describe */
    const QVariant m_typeName; /**< TODO: describe */
    ISerializeComponent* m_root; /**< TODO: describe */
    QList<ISerializeComponent*> m_childs; /**< TODO: describe */
    QList<ISerializeComponent*> m_imports; /**< TODO: describe */
    const bool m_isRoot; /**< TODO: describe */
};

#endif // TYPEELEMENT_H
