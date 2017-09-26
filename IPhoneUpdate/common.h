#ifndef COMMON_H
#define COMMON_H
#include <memory>

class ICustomer;
class MrX;
typedef std::shared_ptr<ICustomer> ICustomer_ptr;
typedef std::shared_ptr<MrX> IMrX_ptr;

#endif // COMMON_H

