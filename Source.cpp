#include "iostream"
#include "functionality.h"
#include "string"

















int main() {

    // variables

    int userSelection;


    // player selection

    while (true) {

        print("Hello, please enter a num 1-3\n");

        print("userInput: ");

        if (userNumInput(userSelection) && 0 < userSelection <= 3) {

            break;

        }

        else {

            print("Please input correct selection!");

            system("pause");

            system("clear");

        }

    };

    switch (userSelection) {

    case 1:
        print("Worked");
        break;

    case 2:
        print("Worked 2");
        break;

    case 3:
        print("Worked 3");
        break;

    };






}