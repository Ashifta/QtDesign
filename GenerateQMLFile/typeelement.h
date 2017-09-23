#ifndef TYPEELEMENT_H
#define TYPEELEMENT_H

#include <QByteArray>
#include <QVariant>
#include "iserializecomponent.h"
#include "common.h"

/**
 * @brief Hold the try of qml element.
 *
 */
class TypeElement : public ISerializeComponent
{
public:


    ~TypeElement();
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
    void addImport(ISerializeComponent_prt comp);
    /**
     * @brief
     *
     * @param add child element.
     */
    virtual void add( ISerializeComponent_prt );
    /**
     * @brief
     *
     * @param remove child element.
     */
    virtual void remove(  ISerializeComponent_prt );
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
    ISerializeComponent_prt m_root; /**< TODO: describe */
    QList<ISerializeComponent_prt> m_childs; /**< TODO: describe */
    QList<ISerializeComponent_prt> m_imports; /**< TODO: describe */
    const bool m_isRoot; /**< TODO: describe */
};

#endif // TYPEELEMENT_H
