#ifndef ICUSTOMER_H
#define ICUSTOMER_H

#include <QString>

class ICustomer{
 public:
    virtual void updateMe(QString modelName) = 0;
    virtual ~ICustomer(){}
};

#endif // ICUSTOMER_H
