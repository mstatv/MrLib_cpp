#pragma once

// mrlib class declaration
// header file
class mrlib
{
    // public items in mrlib class
    public:
        // enum creation
        enum class action_mrlib
        {
            non, book_search, auth_search, book_sort, mrlib_save
        };

        // creating functions
        bool user_continue();
        char get_task();


        action_mrlib user_input(char input);
};