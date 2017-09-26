#ifndef MRX_H
#define MRX_H

#include <QObject>
#include "icustomer.h"

class MrX :  public QObject, public ICustomer
{
    Q_OBJECT
public:
    MrX();
    void updateMe(QString modelName);

   signals:
    void updateUI(QString modelName);

};

#endif // MRX_H
