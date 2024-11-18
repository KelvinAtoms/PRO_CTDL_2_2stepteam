#include "windows.h"
#include <windows.h>
#include <iostream>
#include<iomanip>

using namespace std;
// Hàm gotoXY
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
