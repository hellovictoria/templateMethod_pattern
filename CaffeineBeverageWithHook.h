#ifndef _CAFFEINEBEVERAGEWITHHOOK_H
#define _CAFFEINEBEVERAGEWITHHOOK_H
#include <iostream>

class CaffeineBeverageWithHook
{
    public:
        virtual void prepareRecipe() final
        {
            boilWater();
            brew();
            pourInCup();
            if(customerWantsCondiments()){
                addCondiments();
            }
        }

        virtual void brew()=0;
        virtual void addCondiments()=0;

        virtual void boilWater() final{
            std::cout << "Boiling water" << std::endl;
        }

        virtual void pourInCup() final{
            std::cout << "Pouring into cup" << std::endl;
        }

        virtual bool customerWantsCondiments(){
            return true;
        }
};

#endif
