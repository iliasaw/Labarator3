#pragma once
#include <string>
#include "Book.h"

enum BookStatus {
    Available,
    Issued
};

// Описание класса "Экземпляр книги" (физическая единица)
class BookCopy {
public:
    BookCopy(std::string inventoryNumber, Book* book);
    ~BookCopy();

    std::string getInventoryNumber(); 
    BookStatus getStatus();
    void setStatus(BookStatus newStatus);
    Book* getBookInfo();

private:
    std::string inventoryNumber;
    BookStatus status;
    Book* pBook; // Указатель на каталожную книгу
};