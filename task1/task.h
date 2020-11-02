
#ifndef MODUL_TASK_H
#define MODUL_TASK_H

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class task {
public:
    double dl_mulct;
    short unsigned int hard_level[5];
    short unsigned int abs_hard_level = 0;
    unsigned int time;
    unsigned short int max_score;
    unsigned short int subj_id;
    task(bool k);

};

#endif //MODUL_TASK_H
