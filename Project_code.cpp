#include <iostream>
#include <string>  //for string functions
#include <cstdlib> //for rand()
#include <ctime>   //for OTP time()

using namespace std;

#define MAX 100

// Structure to represent a transaction
struct Transaction
{
    string type;     // "BUY" or "SELL"
    string crypto;   // Cryptocurrency name
    double quantity; // Quantity of cryptocurrency
    double price;    // Price per unit
};

class login
{
    string og_username = "Affan", og_pass = "qwerty1234", user_username, user_pass;

public:
    login()
    {
        cout << "Welcome to crypto trading\n";
        int count = 0;

        while (count < 3)
        {
            cout << "Please enter your username to login : ";
            getline(cin, user_username);

            if (user_username == og_username)
            {
                cout << "Enter password : ";
                getline(cin, user_pass);

                if (user_pass == og_pass)
                {
                    cout << "Login successful!!!\n";
                    break;
                }
                else
                {
                    cout << "Invalid Password!\n";
                }
            }
            else
            {
                cout << "Invalid username!\n";
            }
            count++;

            if (count == 3)
            {
                cout << "Too many incorrect attempts made!!!\n";
                return;
            }
        }
    }
};

class Stack
{
private:
    Transaction data[MAX];
    int top = -1;

public:
    void push(Transaction transaction)
    {
        if (top < MAX - 1)
        {
            top++;
            data[top] = transaction;
        }
        else
        {
            cout << "Stack overflow!" << endl;
        }
    }

    void display()
    {
        int i;
        if (top != -1)
        {
            cout << "Your transaction history : \n";
            for (i = top; i >= 0; i--)
            {
                cout << "Type: " << data[i].type << ", Crypto: " << data[i].crypto << ", Quantity: " << data[i].quantity << ", Price: $" << data[i].price << endl;
            }
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    void pop_history(int n)
    {
        int i;
        if (top != -1 && n > 0)
        {
            // To ensure that 'n' is not greater than the number of elements in the stack.
            if (n > top + 1)
            {
                n = top + 1;
            }

            for (i = 0; i < n; i++)
            {
                top--;
            }
            if (n == 1)
            {
                cout << n << " transaction successfully deleted.\n";
            }
            else
            {
                cout << n << " transactions successfully deleted.\n";
            }
        }
        else
        {
            cout << "Delete operation failed." << endl;
        }
    }
};

class Cypto_Trade_Logic
{
private:
public:
    int Bitcoin()
    {
        int max = 1000000;
        int count = 0;
        while (1)
        {
            int randomnumber = rand() % max;
            if (count >= 0 && count <= 3)
            {
                if (randomnumber >= 188880 && randomnumber <= 189110)
                {
                    return randomnumber;
                    break;
                }
            }
            else if (count > 3 && count <= 7)
            {
                if (randomnumber > 189110 && randomnumber <= 190692)
                {
                    return randomnumber;
                    break;
                }
            }
            else
            {
                if (randomnumber > 189309 && randomnumber <= 190692)
                {
                    return randomnumber;
                    break;
                }
            }
            count++;

            if (count == 10)
            {
                count = 0;
            }
        }
    }

    int Ethereum()
    {
        int max = 1000000;
        int count = 0;
        while (1)
        {
            int randomnumber = rand() % max;
            if (count >= 0 && count <= 3)
            {
                if (randomnumber >= 12816 && randomnumber <= 13120)
                {
                    return randomnumber;
                    break;
                }
            }
            else if (count > 3 && count <= 7)
            {
                if (randomnumber > 13120 && randomnumber <= 13311)
                {
                    return randomnumber;
                    break;
                }
            }
            else
            {
                if (randomnumber > 13120 && randomnumber <= 13311)
                {
                    return randomnumber;
                    break;
                }
            }
            count++;

            if (count == 10)
            {
                count = 0;
            }
        }
    }
};

int main()
{
    login user_login;
    Stack stk;
    Cypto_Trade_Logic CTL;
    int btquantity = 0;
    int ethquantity = 0;
    int delete_nos_transaction;
    int recover_nos_transaction;
    int ch;
    string type;         // "BUY" or "SELL".
    string crypto;       // Cryptocurrency name.
    double quantity = 0; // Quantity of cryptocurrency.
    double price = 0;    // Price of cryptocurrency.
    double sell_unit_cost = 0;
    double buy_unit_cost = 0;
    int buy_choice;
    int sell_choice;
    bool breakloop = false;
    do
    {
        cout << "\nEnter the corressponding number of the task you want to perform: \n";
        cout << "***********************************************************************\n\n";
        cout << "1) Buy " << endl;
        cout << "2) Sell " << endl;
        cout << "3) Check crypto wallet balance " << endl;
        cout << "4) Check transaction history " << endl;
        cout << "5) Delete transaction history " << endl;
        cout << "6) Exit " << endl;
        cout << "***********************************************************************\n\n";
        cout << "User input : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            type = "BUY";
            cout << "Select cryptocurrency to BUY :-\n";
            cout << "1) Bitcoin " << endl;
            cout << "2) Ethereum " << endl;
            cin >> buy_choice;
            cin.ignore();
            if (buy_choice == 1)
            {
                buy_unit_cost = CTL.Bitcoin();
                crypto = "BITCOIN";
                cout << "Bitcoin:\n";
                cout << "Quantity : ";
                cin >> quantity;
                if (quantity <= 0)
                {
                    cout << "Quantity cannot be zero(0) or less than zero(0).\nTransaction failed.\n";
                    break;
                }
                else if (quantity > 0)
                {
                    price = quantity * buy_unit_cost;
                    if (quantity == 1)
                    {
                        cout << quantity << " Bitcoin is purchased at the rate of $" << price << "/-\n";
                    }
                    else
                    {
                        cout << quantity << " Bitcoins are purchased for $" << price << "/- at the rate of $" << buy_unit_cost << "/- each.\n";
                    }
                    btquantity = btquantity + quantity;
                    Transaction transaction = {type, crypto, quantity, price};
                    stk.push(transaction);
                }
                else
                {
                    cout << "Invalid quantity entered.\nTransaction failed.\n";
                }
            }
            else if (buy_choice == 2)
            {
                buy_unit_cost = CTL.Ethereum();
                crypto = "ETHEREUM";
                cout << "Ethereum:\n";
                cout << "Quantity : ";
                cin >> quantity;
                if (quantity <= 0)
                {
                    cout << "Quantity cannot be zero(0) or less than zero(0).\nTransaction failed.\n";
                    break;
                }
                else if (quantity > 0)
                {
                    price = quantity * buy_unit_cost;
                    if (quantity == 1)
                    {
                        cout << quantity << " Ethereum is purchased at the rate of $" << price << "/-\n";
                    }
                    else
                    {
                        cout << quantity << " Ethereums are purchased for $" << price << "/- at the rate of $" << buy_unit_cost << "/- each.\n";
                    }
                    ethquantity = ethquantity + quantity;
                    Transaction transaction = {type, crypto, quantity, price};
                    stk.push(transaction);
                }
                else
                {
                    cout << "Invalid quantity entered.\nTransaction failed.\n";
                }
            }
            else
            {
                cout << "Invalid choice!\n";
            }

            break;
        case 2:
            type = "SELL";
            cout << "Select cryptocurrency to SELL :-\n";
            cout << "1) Bitcoin " << endl;
            cout << "2) Ethereum " << endl;
            cin >> sell_choice;
            cin.ignore();
            if (sell_choice == 1)
            {
                sell_unit_cost = CTL.Bitcoin();
                crypto = "BITCOIN";
                cout << "Bitcoin:\n";
                cout << "Quantity : ";
                cin >> quantity;
                if (quantity <= 0)
                {
                    cout << "Quantity cannot be zero(0) or less than zero(0).\nTransaction failed.\n";
                    break;
                }
                else if (quantity <= btquantity)
                {
                    price = quantity * sell_unit_cost;
                    if (quantity == 1)
                    {
                        cout << quantity << " Bitcoin is sold at the rate of $" << price << "/-\n";
                    }
                    else
                    {
                        cout << quantity << " Bitcoins are sold for $" << price << "/- at the rate of $" << sell_unit_cost << "/- each.\n";
                    }
                    btquantity = btquantity - quantity;
                    Transaction transaction = {type, crypto, quantity, price};
                    stk.push(transaction);
                }
                else if (quantity > btquantity)
                {
                    cout << "Quantity exceeds the available bitcoins in your wallet.\n";
                }
                else
                {
                    cout << "Invalid quantity!\n";
                }
            }
            else if (sell_choice == 2)
            {
                sell_unit_cost = CTL.Ethereum();
                crypto = "ETHEREUM";
                cout << "Ethereum:\n";
                cout << "Quantity : ";
                cin >> quantity;
                if (quantity <= 0)
                {
                    cout << "Quantity cannot be zero(0) or less than zero(0).\nTransaction failed.\n";
                    break;
                }
                else if (quantity <= ethquantity)
                {
                    price = quantity * sell_unit_cost;
                    if (quantity == 1)
                    {
                        cout << quantity << " Ethereum is sold at the rate of $" << price << "/-\n";
                    }
                    else
                    {
                        cout << quantity << " Ethereums are sold for $" << price << "/- at the rate of $" << sell_unit_cost << "/- each.\n";
                    }
                    ethquantity = ethquantity - quantity;
                    Transaction transaction = {type, crypto, quantity, price};
                    stk.push(transaction);
                }
                else if (quantity > ethquantity)
                {
                    cout << "Quantity exceeds the available ethereum in your wallet.\n";
                }
                else
                {
                    cout << "Invalid quantity!\n";
                }
            }
            else
            {
                cout << "Invalid choice!\n";
            }
            break;
        case 3:
            cout << "Your crypto wallet :-\n";
            cout << "Bitcoin : " << btquantity << endl;
            cout << "Ethereum : " << ethquantity << endl;
            cout << "Other : None " << endl;
            break;
        case 4:
            stk.display();
            break;
        case 5:
            cout << "Enter number of transactions to delete : ";
            cin >> delete_nos_transaction;
            if (delete_nos_transaction > 0)
            {
                stk.pop_history(delete_nos_transaction);
            }
            else
            {
                cout << "Invalid or zero input\n";
            }
            break;
        case 6:
            breakloop = true;
            break;
        default:
            cout << "Invalid choice.\n";
            break;
        }
    } while (breakloop == false);

    return 0;
}
