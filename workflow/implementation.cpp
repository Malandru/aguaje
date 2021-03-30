#include <implementation.hpp>
#include <tigre.hpp>
#include <mexico.hpp>
#include <logging.hpp>

void do_something_with_animals()
{
    Tigre tigre("Toño");
    log("Nombre del tigre: " + tigre.get_nombre());
}

void do_something_with_countries()
{
    Mexico mexico("Ciudad de México");
    log("Capital de México: " + mexico.get_capital());
}
