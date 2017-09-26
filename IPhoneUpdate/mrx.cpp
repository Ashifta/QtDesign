#include "mrx.h"

MrX::MrX()
{

}

void MrX::updateMe(QString modelName)
{
    emit updateUI(modelName);
}
