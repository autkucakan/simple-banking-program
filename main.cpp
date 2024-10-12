#include <iostream>

void deposit();
void withdraw();

int balance = 0;

int main() {
    int choice;

    std::cout << "Welcome to Uduqu Banking!\nWhat process you would like to perform?\n";

    do {
        std::cout << "(1) View bank balance\n(2) Deposit money\n(3) Withdraw money\n(4) Exit\n";
        std::cin >> choice;

        switch(choice) {
            case(1):
                std::cout << "Here's the current status of your bank balance: \n" << balance << "\n";
            break;
            case(2):
                deposit();
            break;
            case(3):
                withdraw();
            break;
            case(4):
                std::cout << "Exiting from system...\n";
            default:
                std::cout << "There is no such process.";
            break;

        }
    }
    while(choice != 4);
}

void deposit() {

    int d_choice;
    std::cout << "How much money would you like to deposit?: ";
    std::cin >> d_choice;

    balance = balance + d_choice;

    if (d_choice <= 0) {
        std::cout <<"Wrong amount of money\n";
    }

    else {
        std::cout << d_choice << " dollar(s) added to your bank account.\n";
    }

}

void withdraw() {

    int w_choice;
    std::cout << "How much money would you like to withdraw?: ";
    std::cin >> w_choice;

    if((balance - w_choice) <= 0) {
        std::cout << "You don't have enough money to withdraw\n";
    }
    else {
        std::cout << w_choice << " dollar(s) withdrew to your bank account.\n";
        balance = balance - w_choice;
    }
}