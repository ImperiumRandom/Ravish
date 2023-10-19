#include "functionality.h"

void print(std::string prompt) {

    std::cout << prompt;

}

void newLine(int numberOfNewLines) {

    for (int i = 0; i < numberOfNewLines; i++) {

        std::cout << std::endl;

    }

}

bool userNumInput(int& userInput) {

    while (!(std::cin >> userInput)) {

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return false;

    }

    return true;


}