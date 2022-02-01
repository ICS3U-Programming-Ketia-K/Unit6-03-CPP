// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 29, 2022
// This program uses a for loop to generate
// 10 random numbers in a list, then
// displays the smallest value
#include <iostream>
#include <array>
#include <random>
#include <ctime>
// this function calculates the smallest value in the array
template <size_t MAX_ARRAY_SIZE>
int FindMinValue(std::array<int, MAX_ARRAY_SIZE> ranNumbers) {
    int minValue = ranNumbers[0];

for (int randomNumber : ranNumbers) {
  if (minValue > randomNumber) {
    minValue = randomNumber;
  }
}
return minValue;
}
int main() {
    // declaring constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;
    // initializing counter
    int loopCounter = 0;
    // declaring variables
    std::array<int, MAX_ARRAY_SIZE> ranNumbersUser;
    int minUser;
    // generate random
    srand(time(NULL));
    // display opening message
    std::cout << "This program generates a list of 10 random ";
    std::cout << "numbers between 0 and 100, ";
    std::cout << "then determines the smallest number.";
    std::cout << std::endl;
    std::cout << std::endl;
    // displays random numbers and calculates average
    for (loopCounter = 0; loopCounter < MAX_ARRAY_SIZE; loopCounter++) {
        int randomNumber = (rand() % (MIN_NUM + MAX_NUM));
        ranNumbersUser[loopCounter] = randomNumber;
        std::cout << ranNumbersUser[loopCounter];
        std::cout << " added to the list at position " << loopCounter;
        std::cout << std::endl;
    }
    minUser = FindMinValue(ranNumbersUser);
    std::cout << std::endl;
    std::cout << "The minimum value is: " << minUser;
}
