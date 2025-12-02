#pragma once
#include <string>

// Описание класса "Книга" (каталожная единица)
class Book {
public:
    Book(std::string title, std::string author, std::string category);
    ~Book();

    std::string getTitle();
    std::string getAuthor();
    std::string getCategory(); 

private:
    std::string title;
    std::string author;
    std::string category;
};