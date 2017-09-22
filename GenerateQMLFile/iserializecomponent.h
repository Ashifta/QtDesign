#ifndef ISERIALIZECOMPONENT_H
#define ISERIALIZECOMPONENT_H

#include <QByteArray>


/**
 * @brief Interface component to serialize operation.
 *
 */
class ISerializeComponent
{
public:
   // In our case the "Operation is" serialize.
   /**
    * @brief
    *
    * @param data reference passed to update the data from concreate class.
    */
   virtual void serialize(QByteArray& data) = 0;
   /**
    * @brief
    *
    * @param used to add child of qml element
    */
   virtual void add( ISerializeComponent* ){}
   /**
    * @brief
    *
    * @param used to remove the qml element.
    */
   virtual void remove(  ISerializeComponent* ){}
public:
   /**
    * @brief
    *
    */
   virtual ~ISerializeComponent(){}
};

#endif // ISERIALIZECOMPONENT_H
