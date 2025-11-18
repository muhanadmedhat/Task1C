#include <iostream>
#include "draw_plus.h"

#ifdef _WIN32
    #include <windows.h>
    #define sleep(seconds) Sleep((seconds) * 1000)
#else
    #include <unistd.h>
#endif

using namespace std;

int main() {
    int x, y;

    /*cout << "Enter X coordinate: ";
    cin >> x;

    cout << "Enter Y coordinate: ";
    cin >> y;*/

    drawPlus(5, 5);
    sleep(10);
    clearScreen();

    return 0;
}