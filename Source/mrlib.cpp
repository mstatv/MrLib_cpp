#include "mrlib.h"
#include <iostream>

/*
user_continue function outside of mrlib class source file but in scope
*/
bool mrlib::user_continue()
{
    // prompt user 
    std::cout<<"Would you like to do anything else? (y/n)";
    
    // user input variable and taking as input
    char user_resp;
    std::cin>>user_resp;

    // telling fuction to continue running if user inputs 'y' (case agnostic)
    return user_resp == 'y' || user_resp == 'Y';
}