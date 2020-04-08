//
// Created by ilknull on 4/8/20.
//

#include <iostream>
#include "account.h"
#include <cmath>
using namespace std;

account::account() {
    accBalance=0;
    accNumber =0;
}

int account::getAccNumber() {
    return accNumber;
}

float account::getAccBalance() {
    return accBalance;
}

void account::setAccNumber(int n) {
    accNumber = n;
    cout<<"Account Number set to "<<n<<endl;
}

void account::setAccBalance(float n) {
    accBalance = n;
    cout<<"Account Balance set to "<<n<<endl;
}

void account::calculateFutureBalance(float rate, float numYears) {
    float futureBalance;
    futureBalance = accBalance * pow((1+rate/1),3);
    cout.precision(2);
    cout << "Future Balance with " << rate << " rate and " <<numYears <<" years is "<<fixed<<futureBalance<<endl;
}

void account::inputTransaction(char type, float amount) {
    float newBalance;
    if(type=='D'){
        newBalance = getAccBalance() + amount;
    }else if(type=='W'){
        if(amount>getAccBalance()){
            cout<<"Balance not sufficient to make this transaction"<<endl;
            return;
        }
        newBalance = getAccBalance() - amount;
    }

    setAccBalance(newBalance);
    getAccBalance();
}

void account::mortgageYear(float mortgage, float mrate, float arate) {
    float reduce = getAccBalance()*arate;
    int years=0;
    while(mortgage>0){
        mortgage+=mortgage*mrate;
        mortgage-=reduce;
        years++;
    }
    cout<<"You need "<<years<< " years to pay"<<endl;
}



