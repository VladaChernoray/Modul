#include "task.h"


task::task(bool k){
    if(k){
        subj_id = 1 + rand() %5 ;
        max_score = rand() % 20;
        time = 4 + rand() % 10;
        dl_mulct = 0.01 * (rand() % 100);
        if (dl_mulct < 0)
            dl_mulct = 0;
        if (dl_mulct > 1)
            dl_mulct = 1;
        if (time == 0)
            time = 1;
        for (int i = 0; i < 5; i++) {
            hard_level[i] = 1 + rand() % 10;
            if (hard_level[i] > 10)
                hard_level[i] = 10;
            if (hard_level[i] < 1)
                hard_level[i] = 1;
            abs_hard_level += hard_level[i];
        }
    }
    else {
        cout << "cin subject ID (1-5)\n";
        cin >> subj_id;
        cout << "cin max_score\n";
        cin >> max_score;
        cout << "cin DL time\n";
        cin >> time;
        cout << "cin DLm\n";
        cin >> dl_mulct;
        if (dl_mulct < 0)
            dl_mulct = 0;
        if (dl_mulct > 1)
            dl_mulct = 1;
        if (time == 0)
            time = 1;
        for (int i = 0; i < 5; i++) {
            cout << "cin HL(1-10) for subject " << i + 1 << endl;
            cin >> hard_level[i];
            if (hard_level[i] > 10)
                hard_level[i] = 10;
            if (hard_level[i] < 1)
                hard_level[i] = 1;
            abs_hard_level += hard_level[i];
        }
    }
}