#include <iostream>
#include "menu.h"
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    menu m;
    m.Menu();
}

