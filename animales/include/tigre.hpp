#ifndef TIGRE_HPP
#define TIGRE_HPP

#include <string>

class Tigre
{
private:
    std::string nombre;
public:
    Tigre(std::string nombre);
    std::string get_nombre();
};

#endif