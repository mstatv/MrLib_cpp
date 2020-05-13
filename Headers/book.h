#pragma once
#include <string>
#include <tuple>
#include <iostream>

/*
creation of book structure
*/
struct book
{
    // defining title
    std::string b_title;
    // defining author
    std::string b_author;

    // defining book genre
    std::string b_genre;
};

/*
creating a ouput from book structure, data will be recieved from file
print books out
*/
inline std::ostream& operator<<(std::ostream& output, const book &book)
{
    output<<"Book Title: "<<book.b_title<<" a "<<book.b_genre<<" written by "<<book.b_author;

    return output;
}

/*
sort the books
comparing two books to each other -> lex
b_title -> b_genre -> b_author
*/
inline bool operator<(const book& left, const book& right)
{
    return std::tie(left.b_title, left.b_genre, left.b_author) < std::tie(right.b_title, right.b_genre, right.b_author);
}