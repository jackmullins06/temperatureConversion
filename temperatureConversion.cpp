#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

int celsiusToFahrenheit(int temperature) {
    return (temperature * 1.8) + 32;
}

int fahrenheitToCelsius(int temperature) {
    return (temperature - 32) * 5/9;
}

int main() {
    std::cout << "Would you like to :" << std::endl;
    std::cout << "1. Convert Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Convert Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter the corresponding number" << std::endl;
    
    int option;
    int temperature;

    std::cin >> option;

    std::cout << "Please enter the temperature you would like to convert" << std::endl;
    std::cin >> temperature;

    if(option == 1) {
        std::cout << temperature << "Celsius is " << celsiusToFahrenheit(temperature) << "Fahrenheit." << std::endl;
    }  else if(option == 2) {
        std::cout << temperature << "Fahreinheit is " << fahrenheitToCelsius(temperature) << "Celsuis." << std::endl;
    }

}