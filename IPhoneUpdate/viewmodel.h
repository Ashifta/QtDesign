#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include <QObject>
#include <QMap>
#include "common.h"
#include "appleiphonepublisher.h"

class ViewModel : public QObject
{
    Q_OBJECT
public:    
    Q_INVOKABLE void registerForIphone(QString objectName);
    Q_INVOKABLE void unRegisterForIphone(QString objectName);
    Q_INVOKABLE void launchNewIIphone();

private:
    QMap<QString, ICustomer_ptr> m_customers;
    AppleIphonePublisher m_applePublisher;

signals:
    void updateUI(QString uidata);
};

#endif // VIEWMODEL_H
