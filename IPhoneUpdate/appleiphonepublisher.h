#ifndef APPLEIPHONEPUBLISHER_H
#define APPLEIPHONEPUBLISHER_H

#include "common.h"
#include "icustomer.h"

#include <QList>
#include <QObject>

class AppleIphonePublisher: public QObject
{
public:
    void launchNewIIphone();
    AppleIphonePublisher(QObject* parent);
    void registForIphone(ICustomer_ptr);
    void unregister(ICustomer_ptr);

private:
    QList<ICustomer_ptr> mn_customers;
};

#endif // APPLEIPHONEPUBLISHER_H
