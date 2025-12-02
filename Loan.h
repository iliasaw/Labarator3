#pragma once
#include <string>
#include "Reader.h"
#include "BookCopy.h"

// Описание класса "Выдача" (факт аренды)
class Loan {
public:
    Loan(Reader* reader, BookCopy* copy, long issueDate, long dueDate);
    ~Loan();

    long getIssueDate();
    long getDueDate();
    long getReturnDate();
    void setReturnDate(long returnDate);
    Reader* getReader();
    BookCopy* getBookCopy();

    double calculateFine(long currentDate, double dailyRate); 

private:
    long issueDate; // Даты в формате timestamp
    long dueDate;
    long returnDate;
    Reader* pReader;
    BookCopy* pBookCopy;
};