# DataStructure
This repo contains a mini project "Crypto Trading Simulator" that helps understand practical use of data structures, particularly stack.
-----------------------------------------------------------------------------------------------------------------------------
Introduction
This documentation provides an overview of a simple C++ program for simulating cryptocurrency trading. The program allows users to perform basic cryptocurrency trading operations, maintain transaction history, and view their cryptocurrency wallet balances. This project is intended for educational purposes and provides a basic framework for understanding how cryptocurrency trading simulations can be implemented in C++.

Prerequisites
Before using this program, ensure that you have the following:

C++ Compiler: You need a C++ compiler to compile and run the program.
C++ Standard Library: The program uses the C++ Standard Library for input/output, string handling, and random number generation.
Code Structure
The program is structured into several parts:

Header Inclusions: The necessary header files are included at the beginning of the program. These headers provide access to various C++ features, such as input/output, strings, random number generation, and time functions.

Transaction Structure: A Transaction structure is defined to represent individual cryptocurrency transactions. Each transaction includes information about its type (BUY or SELL), the cryptocurrency name, the quantity, and the price per unit.

Login Class: A login class is created to handle user login functionality. Users are required to enter a username and password to access the trading system.

Custom Stack Class: A custom stack class named Stack is implemented to maintain a history of cryptocurrency transactions. The stack allows pushing transactions onto it and displaying transaction history. Additionally, there is a method for deleting a specified number of recent transactions.

Crypto_Trade_Logic Class: A Crypto_Trade_Logic class is defined to simulate the price changes of two cryptocurrencies: Bitcoin and Ethereum. It provides methods for generating random cryptocurrency prices based on predefined rules.

Main Function: The main function serves as the entry point of the program. It manages user interactions and the core logic of cryptocurrency trading. Users can buy or sell cryptocurrencies, check their wallet balances, view transaction history, delete transaction history, and exit the program.

Program Flow
The program starts by requesting user login credentials (username and password). Users have three attempts to log in successfully.

Once logged in, the user is presented with a menu of options, including buying, selling, checking wallet balances, viewing transaction history, deleting transaction history, and exiting the program.

Users can choose to buy or sell either Bitcoin or Ethereum. Cryptocurrency prices are simulated using the Crypto_Trade_Logic class, and transactions are recorded in the Stack.

Users can check their cryptocurrency wallet balances, which are updated based on their buying and selling activities.

Users can view their transaction history, which includes details of all previous transactions.

Users have the option to delete a specified number of recent transactions from their history.

The program continues to execute the chosen actions until the user decides to exit.

Cryptocurrency Price Simulation
The program simulates the price changes of Bitcoin and Ethereum using simple rules. The Crypto_Trade_Logic class contains methods for generating random prices based on predefined rules. These rules divide trading into three phases, each with its own price range.

Phase 1 (count 0-3): Bitcoin price range: $188,880 - $189,110, Ethereum price range: $12,816 - $13,120.
Phase 2 (count 4-7): Bitcoin price range: $189,110 - $190,692, Ethereum price range: $13,120 - $13,311.
Phase 3 (count 8-9): Bitcoin price range: $189,309 - $190,692, Ethereum price range: $13,120 - $13,311.
User Instructions
Launch the program and log in with the provided username and password.

Choose from the menu of options to perform various actions:

Buy or sell Bitcoin or Ethereum.
Check cryptocurrency wallet balances.
View transaction history.
Delete a specified number of recent transactions.
Exit the program.
Follow the on-screen instructions for each action, such as specifying the quantity of cryptocurrency to buy or sell.

Error Handling
The program handles invalid inputs for quantity, choices, and login credentials by displaying appropriate error messages.
It limits the number of login attempts to three.
Conclusion
This C++ program provides a basic simulation of cryptocurrency trading and serves as an educational tool for understanding stack data structures, random number generation, and simple user interactions. It demonstrates how to implement a basic cryptocurrency trading system with transaction history and wallet balance management.
