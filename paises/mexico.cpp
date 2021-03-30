#include <mexico.hpp>

Mexico::Mexico(std::string capital)
{
    this->capital = capital;
}

std::string Mexico::get_capital()
{
    return this->capital;
}
