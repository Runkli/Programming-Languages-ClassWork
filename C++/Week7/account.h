//
// Created by ilknull on 4/8/20.
//

#ifndef WEEK7_ACCOUNT_H
#define WEEK7_ACCOUNT_H


class account {
private:
    long int accNumber;
    float accBalance;

public:
    account();
    int getAccNumber();
    void setAccNumber(int);
    float getAccBalance();
    void setAccBalance(float);
    void inputTransaction(char,float);
    void calculateFutureBalance(float,float);
    void mortgageYear(float,float,float);
};


#endif //WEEK7_ACCOUNT_H
