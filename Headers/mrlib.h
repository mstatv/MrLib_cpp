#pragma once

// mrlib class declaration
// header file
class mrlib
{
    // public items in mrlib class
    public:
        // enum creation
        enum class tasks_mrlib
        {
            none, book_search, auth_search, book_sort, mrlib_save
        };

        // creating functions
        bool user_continue();
        char task_get();


        tasks_mrlib user_input(char input);
};