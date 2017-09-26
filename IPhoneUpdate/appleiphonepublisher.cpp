#include "appleiphonepublisher.h"

void AppleIphonePublisher::registForIphone(ICustomer_ptr customer)
{
    mn_customers.append(customer);
}

void AppleIphonePublisher::unregister(ICustomer_ptr customer)
{
    if(mn_customers.contains(customer))
    {
       mn_customers.removeOne(customer);
    }
}

void AppleIphonePublisher::launchNewIIphone()
{
    foreach( ICustomer_ptr customer, mn_customers ) //C++11
    {
        //New Model iPhone X
        customer->updateMe("iPhone X");
    }
}

AppleIphonePublisher::AppleIphonePublisher(QObject* parent)
    :QObject(parent)
{

}
