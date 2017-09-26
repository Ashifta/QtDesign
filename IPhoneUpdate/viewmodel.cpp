#include "mrx.h"
#include "viewmodel.h"



void ViewModel::registerForIphone(QString objectName)
{

    if( objectName == "mrx")
    {
        IMrX_ptr ptr(new MrX());

        connect(ptr.get(), &MrX::updateUI, this, &ViewModel::updateUI );
        m_customers.insert(objectName,ptr );
    }
    else
    {

    }
    m_applePublisher.registForIphone(m_customers[objectName]);//TODO need dynamic add of customers.
}

void ViewModel::unRegisterForIphone(QString objectName)
{
    m_applePublisher.unregister(m_customers[objectName]);
}

void ViewModel::launchNewIIphone()
{
    m_applePublisher.launchNewIIphone();
}
