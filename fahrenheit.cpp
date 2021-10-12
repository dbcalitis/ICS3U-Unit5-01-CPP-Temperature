// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program does temperature conversion

#include <iostream>
#include <string>

void Fahrenheit() {
    // This function converts Celcius to Fahrenheit
    float celciusTemp;
    float fahrenheitTemp;
    std::string celciusTempString;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celciusTempString;

    // process & output
    try {
        celciusTemp = std::stof(celciusTempString);
        fahrenheitTemp = (celciusTemp * 9 / 5) + 32;

        printf("%f°C is equal to %.1f°F.", celciusTemp, fahrenheitTemp);
    } catch(...) {
        std::cout << "Invalid Input." << std::endl;
    }
}

int main() {
    // This function is the main function
    Fahrenheit();

    std::cout << "\nDone." << std::endl;
}
