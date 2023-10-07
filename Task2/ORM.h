#ifndef ORM_H
#define ORM_H

#include <string>

class ORM {
public:
    std::string executeQuery(const std::string& query);
};

#endif // ORM_H
