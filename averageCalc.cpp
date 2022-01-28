// Copyright (c) 2022 Alexander Matheson All rights reserved.
//
// Created by: Alexander matheson
// Created on: Jan 27 2022
// This program generates 10 random numbers
// and calculates the average.
#include <iostream>
#include <random>


int main() {
    // declare constants
    const int MAX_SIZE = 10;
    // declare variables
    float arrayOfInt[MAX_SIZE];
    float sum = 0.0;
    int randNum;
    float average;

    // loop to add numbers to array
    for (int counter = 0; counter < (MAX_SIZE + 1); counter++) {
        // generate random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 101);
        randNum = idist(rgen);
        arrayOfInt[counter] = randNum;
        // display number
        std::cout << randNum << " was added at position " << counter << "\n";
    }
    // loop to increase sum
    for (int counter2 = 0; counter2 < (MAX_SIZE + 1); counter2++) {
        sum = sum + arrayOfInt[counter2];
    }
    // calc average
    average = sum / MAX_SIZE;
    // display average
    std::cout << "The average is " << average;
}
