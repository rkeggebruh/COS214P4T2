#include <iostream>
#include "ORM.h"
#include "DatabaseAdapter.h"

int main() {
    ORM orm;
    
    DatabaseAdapter adapter(&orm);
    
    std::string query = "FROM table SELECT *";
    std::cout << "The original query: " << query << std::endl;

    std::string result = adapter.executeQuery(query);
    
    std::cout << "Resulting query: " << result << std::endl;

    std::cout << std::endl;

    std::string querys = "FROM users SELECT *";
    std::cout << "The original query: " << querys << std::endl;

    std::string results = adapter.executeQuery(querys);
    
    std::cout << "Resulting query: " << results << std::endl;
    
    return 0;
}
