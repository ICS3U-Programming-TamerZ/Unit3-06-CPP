// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Oct.17, 2022
// This program checks if the user guessed a number correctly
// using an If..Then..Else statement. Also uses a try - catch statement
// to handle exceptions.

#include <iostream>
#include <string>
#include <random>

int main()  {
    // Initializing variables:
    std::string userGuess;
    int numGuess, secretNumber;

    // Gets the user's guess
    std::cout << "Enter a guess (integer) from 0-9: \n";
    std::cout << ">> ";
    std::cin >> userGuess;

    // Assigning a random integer from 0-9 to secretNumber:
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    secretNumber = idist(rgen);

    // Tries converting userGuess to an integer and
    // assigning the value to numGuess:
    try {
        numGuess = std::stoi(userGuess);

        // Code executed if the user's guess was correct:
        if (numGuess == secretNumber) {
            std::cout << "Correct!";

        // Code executed if the user's guess was incorrect:
        } else {
            std::cout << "Incorrect, the secret number was "
             << secretNumber << std::endl;
        }

    // Throws an exception if the user did not enter an integer:
    } catch (std::invalid_argument) {
        std::cout << "You did not enter an integer.\n"; }
}
