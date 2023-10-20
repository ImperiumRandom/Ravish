#include "helpers.h"
#include "windows.h"








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

        //std::cin.ignore(std::numeric_limits<std::streamsize>::max, '\n');

        return false;

    }

    return true;


}

void setFontSize( int width, int height) {

    CONSOLE_FONT_INFOEX cfi;

    cfi.cbSize = sizeof(cfi);

    cfi.nFont = 0;

    cfi.dwFontSize.X = width;

    cfi.dwFontSize.Y = height;

    cfi.FontFamily = FF_DONTCARE;

    cfi.FontWeight = FW_BLACK;

    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

}

void centerText() {


}

void moveText(int width) {







}