#include "menu.h"

void menu::Menu(){
    char temp = '0';

    while(true){
        cout << "1-new student\n2-new task\n3-info\n4-model\n5-exit\n";
        cin >> temp;

        if(temp == '1'){
            newstudent();
        }
        else
            if (temp == '2'){
            newtask();
        }
        else
            if(temp == '3'){
            info();
        }
        else
            if(temp == '4'){
            model();
        }
        else
            if (temp == '5')
            break;
        _getche();
        else
            cout << "Incorrect operation symbol\n";
    }
}

void menu::info() {
    for (int i = 0; i < students_v.size(); i++){
        for (int j = 0; j < 5; j++) {
            cout<<students_v[j]->pr[j][0]<<'\t'<<students_v[j]->pr[j][1]<<endl;
        }
        cout << endl;
    }
}

task* menu::tact(student* student){
    if (student->tactic_id == 1){
        unsigned short int var = 0;
        for (int temp = 0; temp < 5; temp++){
            if (student->pr[temp][0] > var)
                var = temp;
        }

        task* myTask = nullptr;
        double hl=0;
        for (int i = 0; i < this->tasks_v.size(); i++){
            if (tasks_v[i]->hard_level[var] / tasks_v[i]->abs_hard_level  >  hl){
                if(!student->d_tasks.empty()) {
                    for (int j = 0; j < student->d_tasks.size(); j++) {
                        if (tasks_v[i] != student->d_tasks[j]) {
                            if (j != student->d_tasks.size() - 1) {
                                continue;
                            }
                            hl = tasks_v[i]->hard_level[var] / tasks_v[i]->abs_hard_level;
                            myTask = tasks_v[i];
                        } else break;
                    }
                }
                else
                    {
                    hl = tasks_v[i]->hard_level[var] / tasks_v[i]->abs_hard_level;
                    myTask = tasks_v[i];
                }


            }
            else
                if((tasks_v[i]->hard_level[var] / tasks_v[i]->abs_hard_level == hl)&&(tasks_v[i]->max_score  >  myTask->max_score)){
                if(!student->d_tasks.empty()) {
                    for (int k = 0; k < student->d_tasks.size(); k++) {
                        if (tasks_v[i] != student->d_tasks[k]) {
                            if (k != student->d_tasks.size() - 1) {
                                continue;
                            }
                            hl = tasks_v[i]->hard_level[var] / tasks_v[i]->abs_hard_level;
                            myTask = tasks_v[i];
                        }
                        else break;
                    }
                }

                else {
                    hl = tasks_v[i]->hard_level[var] / tasks_v[i]->abs_hard_level;
                    myTask = tasks_v[i];
                }
            }

        }
        return myTask;
    }

    else if (student->tactic_id == 2){
        task* myTask=nullptr;
        short unsigned int hl=51;
        for (int i = 0; i < tasks_v.size(); i++){
            if(tasks_v[i]->abs_hard_level  <  hl){
                if(!student->d_tasks.empty()){
                    for (int k = 0; k < student->d_tasks.size(); k++) {
                        if (tasks_v[i] != student->d_tasks[k]) {
                            if (k != student->d_tasks.size() - 1) {
                                continue;
                            }
                            hl = tasks_v[i]->abs_hard_level;
                            myTask = tasks_v[i];
                        }
                        else break;
                    }
                }
                else{
                    hl = tasks_v[i]->abs_hard_level;
                    myTask = tasks_v[i];
                }
            }
            else if((tasks_v[i]->abs_hard_level  ==  hl)&&(tasks_v[i]->max_score  >  myTask->max_score)){
                if(!student->d_tasks.empty()) {
                    for (int k = 0; k < student->d_tasks.size(); k++) {
                        if (tasks_v[i] != student->d_tasks[k]) {
                            if (k != student->d_tasks.size() - 1) {
                                continue;
                            }
                            hl = tasks_v[i]->abs_hard_level;
                            myTask = tasks_v[i];
                        }
                        else break;
                    }
                }
                else{
                    hl = tasks_v[i]->abs_hard_level;
                    myTask = tasks_v[i];
                }
            }
        }
        return myTask;
    }


    else
        if( student->tactic_id == 3){
        task* myTask = nullptr;
        short unsigned int mScr=0;
        for (int i = 0; i < tasks_v.size(); i++){
            if (tasks_v[i]->max_score  >  mScr){
                if(!student->d_tasks.empty()) {
                    for (int k = 0; k < student->d_tasks.size(); k++) {
                        if (tasks_v[i] != student->d_tasks[k]) {
                            if (k != student->d_tasks.size() - 1) {
                                continue;
                            }
                            mScr = tasks_v[i]->max_score;
                            myTask = tasks_v[i];
                        } else break;
                    }
                }
                else {
                    mScr = tasks_v[i]->max_score;
                    myTask = tasks_v[i];
                }
            }
            else if((tasks_v[i]->max_score == mScr)&&(tasks_v[i]->abs_hard_level >myTask->abs_hard_level)) {
                if (!student->d_tasks.empty()) {
                    for (int k = 0; k < student->d_tasks.size(); k++) {
                        if (tasks_v[i] != student->d_tasks[k]) {
                            if (k != student->d_tasks.size() - 1) {
                                continue;
                            }
                            mScr = tasks_v[i]->max_score;
                            myTask = tasks_v[i];
                        }
                        else
                            break;
                    }
                }
                else
                    {
                    mScr = tasks_v[i]->max_score;
                    myTask = tasks_v[i];
                }
            }
            return myTask;
        }
    }


    else if(student->tactic_id == 4){
        task* myTask = nullptr;
        short unsigned int hl=0;
        for(int i = 0; i < tasks_v.size(); i++){
            if(tasks_v[i]->abs_hard_level  >  hl){
                if (!student->d_tasks.empty()) {
                    for (int k = 0; k < student->d_tasks.size(); k++) {
                        if (tasks_v[i] != student->d_tasks[k]) {
                            if (k != student->d_tasks.size() - 1) {
                                continue;
                            }
                            hl = tasks_v[i]->abs_hard_level;
                            myTask = tasks_v[i];
                        }
                        else
                            break;
                    }
                }
                else {
                    hl = tasks_v[i]->abs_hard_level;
                    myTask = tasks_v[i];
                }
            }
            else if((tasks_v[i]->abs_hard_level  ==  hl)&&(tasks_v[i]->max_score  >  myTask->max_score)){
                if (!student->d_tasks.empty()) {
                    for (int k = 0; k < student->d_tasks.size(); k++) {
                        if (tasks_v[i] != student->d_tasks[k]) {
                            if (k != student->d_tasks.size() - 1) {
                                continue;
                            }
                            hl = tasks_v[i]->abs_hard_level;
                            myTask = tasks_v[i];
                        } else break;
                    }
                }
                else {
                    hl = tasks_v[i]->abs_hard_level;
                    myTask = tasks_v[i];
                }
            }
            return myTask;
        }
    }

}



void menu::model() {
    task *temp;
    for (int i = 0; i < students_v.size(); i++) {
        while (true) {
            temp = tact(students_v[i]);
            if (temp == nullptr)
                break;

            unsigned short int score = 0;
            short unsigned int bonus[5][2];
            for (int l = 0; l < 5; l++) {
                bonus[l][0] = 1;
                bonus[l][1] = 0;
            }
            short unsigned int a = 0;
            for (int k = 0; k < 5; k++) {
                if (temp->hard_level[k] != 0) {
                    a++;
                }
            }
            for (int k = 0; k < a; k++) {
                if (temp->hard_level != 0) {
                    score += temp->max_score * (students_v[i]->pr[k][0] / temp->hard_level[k]) / a;
                }
            }
            students_v[i]->cur_time += ((temp->abs_hard_level * (score / temp->max_score)) / 12);
            if (score > temp->max_score)
                score = temp->max_score;
            if (students_v[i]->cur_time > temp->time) {
                score = score * pow(temp->dl_mulct, students_v[i]->cur_time - temp->time);
                for (int k = 0; k < 5; k++) {
                    bonus[k][0] += (score / temp->max_score) * (temp->max_score - score);
                }
                bonus[temp->subj_id][1] = score;
                update(students_v[i], bonus, temp);

            }
        }
        for (int i = 0; i < students_v.size(); i++) {
            students_v[i]->cur_time = 0;
        }
        tasks_v.clear();
        tasks_v.resize(0);
    }


    void menu::newstudent() {
        char ch;
        cout << "1-auto\n2-by hand\n";
        cin >> ch;
        if (ch == '1') {
            auto nStudent = new student(1);
            students_v.resize(students_v.size() + 1);
            students_v[students_v.size() - 1] = nStudent;
        } else {
            auto nStudent = new student(0);
            students_v.resize(students_v.size() + 1);
            students_v[students_v.size() - 1] = nStudent;
        }
    }

    void menu::newtask() {
        char ch;
        cout << "1-auto\n2-by hand\n";
        cin >> ch;
        if (ch == '1') {
            auto nTask = new task(1);
            tasks_v.resize(tasks_v.size() + 1);
            tasks_v[tasks_v.size() - 1] = nTask;
        } else {
            auto nTask = new task(0);
            tasks_v.resize(tasks_v.size() + 1);
            tasks_v[tasks_v.size() - 1] = nTask;
        }


    }

    void menu::update(student *student, short unsigned int bonusPr[5][2], task *temp) {
        for (int i = 0; i < 5; i++) {
            for (int k = 0; k < 2; k++) {
                student->pr[i][k] += bonusPr[k][i];
            }
            if (student->pr[i][0] > 10)
                student->pr[i][0] = 10;
        }
        student->absKnLvl = 0;
        for (int i = 0; i < 5; i++) {
            student->absKnLvl += student->pr[i][0];
        }
        student->d_tasks.resize(student->d_tasks.size() + 1);
        student->d_tasks[tasks_v.size() - 1] = temp;
        student->tactic(student);
    }
}