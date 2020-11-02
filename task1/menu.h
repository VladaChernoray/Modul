#ifndef MODUL_MENU_H
#define MODUL_MENU_H

#include "student.h"
#include "task.h"
#include <vector>
#include <conio.h>
#include <cmath>
using std::vector;

class menu {
    vector<student*> students_v;
    vector<task*> tasks_v;
    void newtask();
    void newstudent();
    void model();
    void update(student* student, short unsigned int bonusPr[5][2], task* temp);
    void info();
    task* tact(student* student);
public:
    void Menu();
};

#endif //MODUL_MENU_H