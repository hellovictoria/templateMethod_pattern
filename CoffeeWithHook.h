#ifndef _COFFEEWITHHOOK_H
#define _COFFEEWITHHOOK_H
#include <string>
#include <algorithm>
#include <cctype>
#include "CaffeineBeverageWithHook.h"

class CoffeeWithHook : public CaffeineBeverageWithHook
{
    public:
        void brew(){
            std::cout << "Dripping Coffee through filter" << std::endl;
        }

        void addCondiments(){
            std::cout  << "Adding Sugar & Milk" << std::endl;
        }

        std::string getUserInput(){
            std::string answer;
            std::cout << "Would you like milk & sugar with your coffee (y/n)?" << std::endl;
            std::cin >> answer;
            if("" == answer){
                return "NO";
            }
            return answer;
        }

        bool customerWantsCondiments(){
            std::string ans = getUserInput();
            //std::cout << ans << std::endl;
            std::transform(ans.begin(),ans.end(),ans.begin(),[](unsigned char c)-> unsigned char{return std::tolower(c);});
            //std::cout << ans << std::endl;

            if('y' == ans[0]){
                return true;
            }
            else{
                return false;
            }
        }
};
#endif
