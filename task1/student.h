#ifndef MODUL_STUDENT_H
#define MODUL_STUDENT_H

#include <iostream>
#include <vector>
#include "task.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;

class student {
public:
    short unsigned int tactic_id;
    unsigned int cur_time = 0;
    vector<task*> d_tasks;
    short unsigned int pr[5][2];
    short unsigned int abs_kn_lvl = 0;
    student(bool k);
    ~student();
    void tactic(student* student);
};

#endif //MODUL_STUDENT_H
