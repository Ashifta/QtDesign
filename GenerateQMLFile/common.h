#ifndef COMMON_H
#define COMMON_H

#include <memory>

class TypeElement;
class ISerializeComponent;
typedef std::shared_ptr<TypeElement> TypeElement_ptr;
typedef std::shared_ptr<ISerializeComponent> ISerializeComponent_prt;

#endif // COMMON_H
