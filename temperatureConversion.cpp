#include <iostream>
#include <string>
#include <algorithm>
#include "temperatureConversion.h"

int main() {
    std::string tempeartureInput = promptForTemperature();

    double temperature;
    char scale;

    if (!parseTemperatureString(tempeartureInput, temperature, scale)) {
        return 1;
    }

    convertAndPrint(temperature, scale);

    return 0;
}

