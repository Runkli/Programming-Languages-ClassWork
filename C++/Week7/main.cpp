#include <iostream>
#include "account.h"

using namespace std;
int main() {

    float temp,mrate,urate;
    float years;
    account account1;

    int select=0;
    while(select!=7){
        switch(select){
            case 1:
                cout << "Enter new account balance: ";
                cin>>temp;
                account1.setAccBalance(temp);
                break;
            case 2:
                cout << "Your balance is "<<account1.getAccBalance()<<endl;
                break;
            case 3:
                cout << "Enter amount to deposit: ";
                cin>>temp;
                account1.inputTransaction('D',temp);
                break;
            case 4:
                cout << "Enter amount to withdraw: ";
                cin>>temp;
                account1.inputTransaction('W',temp);
                break;
            case 5:
                cout << "Enter annual interest rate: ";
                cin >> mrate;
                cout << "Enter a number of years: ";
                cin >> years;
                account1.calculateFutureBalance(mrate,years);
                break;
            case 6:
                cout << "Enter amount of mortgage: ";
                cin >> temp;
                cout << "Enter an annual mortgage interest rate: ";
                cin >> mrate;
                cout << "Enter an annual interest rate: ";
                cin >> urate;
                account1.mortgageYear(temp,mrate,urate);
                break;
            default:
                break;
            }
        cout << "Enter your selection: ";
        cin >> select;

    }
    cout << "Goodbye :)";
    return 0;
}
