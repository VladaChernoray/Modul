#include "student.h"

void student::tactic(student* student) {
    short unsigned int max = 0;
    unsigned short int d = 0;
    for(int i = 0; i < 5; i++){
        if (student->pr[i][0]>max) {
            max = pr[i][0];
        continue;
        }
        if((max - pr[i][0]) < d)
            d = max - pr[i][0];
    }
    if (d > 2){
        student -> tactic_id = 1;
        return;
    }
    if (max <= 5){
        student->tactic_id = 2;
        return;
    }
    if(max <= 8){
        student->tactic_id = 3;
        return;
    }
    else tactic_id = 4;
}

student::student(bool k){
    if(k) {
        for (int i = 0; i < 5; i++) {
            pr[i][1] = 0;
            pr[i][0] = 1 + rand() % 10;
            abs_kn_lvl += pr[i][0];
        }
    }
    else
        {
        for(int i = 0; i < 5; i++){
            pr[i][1] = 0;
            cout<<"cin subject "<<i + 1<<" kn level(1-10)";
            cin >> pr[i][0];
            if(pr[i][0] > 10)
                pr[i][0] = 10;
            if(pr[i][0]<1)
                pr[i][0] = 1;
            abs_kn_lvl += pr[i][0];
        }
    }
    tactic(this);
}

student::~student(){
    for(int i = 0; i < 5; i++){
        cout<<pr[i][0]<<"\t"<<pr[i][1]<<endl;
    }
}