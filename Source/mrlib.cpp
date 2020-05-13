#include "mrlib.h"
#include <iostream>

/*
user_continue function implementation
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

/*
getting task from user input function implementation
*/
char mrlib::task_get()
{
    // prompt user to select from displayed list of task options
    std::cout<<"What's next on your list? (Choose from the follwoing): "<<std::endl;
    std::cout<<"A -> Show Available Books";
    std::cout<<"B -> Sort Books";
    std::cout<<"C -> Search by Title";
    std::cout<<"D -> Search by Author";
    std::cout<<"E -> Save your library";
    
    // task variable creation to be taken from user input
    char task;
    std::cin>>task;

    return task;
}

/*
init of mrlib enum class -> tasks_mrlib
*/
mrlib::tasks_mrlib mrlib::user_input(char task)
{
    // switch block
    // to set return action based on user input
    // handling both upper and lowercase inputs
    switch(task)
    {
        case 'A':
            return tasks_mrlib::none;
        case 'a':
            return tasks_mrlib::none;
        case 'B':
            return tasks_mrlib::book_sort;
        case 'b':
            return tasks_mrlib::book_sort;
        case 'C':
            return tasks_mrlib::book_search;
        case 'c':
            return tasks_mrlib::book_search;
        case 'D':
            return tasks_mrlib::auth_search;
        case 'd':
            return tasks_mrlib::auth_search;
        case 'E':
            return tasks_mrlib::mrlib_save;
        case 'e':
            return tasks_mrlib::mrlib_save;
        default:
            return tasks_mrlib::none;
    }
}