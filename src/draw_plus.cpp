#include <iostream>
#include <cstdlib>
#include "../include/draw_plus.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    cout << "\033[2J\033[H"; // ANSI clear + move cursor to top
#endif
}

void drawPlus(int x, int y) {
    clearScreen();

    // Move down y lines
    for (int i = 0; i < y; ++i)
        cout << endl;

    // Move right x spaces
    for (int i = 0; i < x; ++i)
        cout << " ";

#ifdef _WIN32
    // Use Windows API for console color
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "We Love";
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << " Linux" << endl;
#else
    // Use ANSI escape codes for Linux / macOS
    cout << "\033[31mWe Love\033[0m Linux" << endl;
#endif
}
