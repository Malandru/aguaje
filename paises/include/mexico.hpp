#ifndef MEXICO_HPP
#define MEXICO_HPP

#include <string>

class Mexico
{
private:
    std::string capital;
public:
    Mexico(std::string capital);
    std::string get_capital();
};

#endif