#include "CoffeeWithHook.h"
#include <iostream>

int main()
{
    CaffeineBeverageWithHook* coffeeHook = new CoffeeWithHook();

    std::cout << "\nMaking coffee..." << std::endl;
    coffeeHook->prepareRecipe();
}
