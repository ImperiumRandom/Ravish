#include "iostream"
#include "helpers.h"
#include "string"

















int main() {

    // variables

    int userSelection;

    setFontSize(10, 30);

    // main menu

    while (true) { 

        print("|| Ravish ||\n");

        print("|| You feel a familier presence lirking, seething, begging for freedom. ||\n\n");

        print("Choice: ");

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