#include <iostream>
#include <iomanip>

double deposit (double balance);
double withdraw (double balance);
double ShowBalance(double balance);

int main (){

    double balance = 100;
    int option = 0;
    int exit = 0;

    do
    {
    std::cout << "******************* Enter your option *******************" << '\n';
    std::cout << "1. deposit money" << '\n';
    std::cout << "2. withdraw money" << '\n';
    std::cout << "3. Show balance" << '\n';
    std::cout << "4. Exit" << '\n';
    std::cin >> option;
    std::cout << "*********************************************************" << '\n';


    std::cin.clear();
    fflush(stdin);

    switch (option)
    {
    case 1: balance = deposit(balance) + balance;
            std::cout << "Current balance: $"<< std::setprecision(2) << std::fixed << balance  << '\n';
        break;
    
    case 2: balance = balance - withdraw(balance);
            std::cout << "Current balance: $"<< std::setprecision(2) << std::fixed << balance  << '\n';
        break;

    case 3: ShowBalance(balance);
        break;

    case 4: std::cout << "Thanks for visiting!";
        break;

    default: std::cout << "Invalid choice" << '\n';

    }
    } while (option != 4);
}


double deposit (double balance){
    double deposit;
    std::cout << "deposit: " << '\n';
    std::cin >> deposit;
     if (0 < deposit)
    {
        return deposit; 
        
    }
    else {
        std::cout << "Invalid number" << '\n';
    }
    
    return 0;
}

double withdraw (double balance){
    double withdraw;
    std::cout << "withdraw: " << '\n';
    std::cin >> withdraw;
    if (withdraw < 0)
    {
        std::cout << "Invalid number" << '\n';
    }
    else if (withdraw > balance)
    {
        std::cout << "insufficient funds" << '\n';
    }else
    {
        return withdraw;
    }
    return 0;
}

double ShowBalance(double balance){
    std::cout << "Current balance: $"<< std::setprecision(2) << std::fixed << balance  << '\n';
    return 0;
}



