#pragma once
#include <string>
#include <vector>
#include "Loan.h"

class Loan; // Опережающее объявление

// Описание класса "Читатель"
class Reader {
public:
    Reader(std::string id, std::string name);
    ~Reader();

    std::string getReaderID();
    std::string getName();
    bool getDebtStatus(); 
    void updateDebtStatus(bool hasDebt);
    std::vector<Loan*> getLoanHistory(); 
    void addLoanToHistory(Loan* loan);

private:
    std::string readerID;
    std::string name;
    bool hasDebt;
    std::vector<Loan*> loanHistory;
};
// Change for merge