#ifndef DATABASE_ADAPTER_H
#define DATABASE_ADAPTER_H

#include <string>
#include "ORM.h"

class DatabaseAdapter {
public:
    DatabaseAdapter(ORM* orm);
    std::string executeQuery(const std::string& query);
private:
    ORM* orm_;
};

#endif // DATABASE_ADAPTER_H
