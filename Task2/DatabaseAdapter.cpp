#include "DatabaseAdapter.h"

DatabaseAdapter::DatabaseAdapter(ORM* orm) : orm_(orm) {}

std::string DatabaseAdapter::executeQuery(const std::string& query) {
    std::string translatedQuery = query.substr(10) + ' ' + query.substr(0,4) + ' ' + query.substr(5,5);
    return orm_->executeQuery(translatedQuery);
}
