#include <tigre.hpp>

Tigre::Tigre(std::string nombre)
{
    this->nombre = nombre;
}

std::string Tigre::get_nombre()
{
    return this->nombre;
}
