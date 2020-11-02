#include <string>
#include <vector>
#include "cmath"

template<typename T>
double f(T temp) {
    return 83.58;
}

double f(int temp) {
    if (temp > 0) return cos((5 * temp + 58));
    if (temp < 0) return log2(std::abs(pow(temp, 3) + 258));
    return 83.58;
}

double f(double temp) {
    return temp / (temp + 358);
}

double f(std::string &temp) {
    int count = 0;

    for(int i = 0; i < temp.size(); i++){
        if(temp[i] >= 48 && temp[i] <=57) count++;
    }
    return pow(temp.size() - count, 2);
}

double f(std::pair<double, double> &temp) {
    return pow(temp.second, sin(516 * f(temp.first)));
}

double f(std::vector<double> temp) {
    double max = -100;
    double prob = 0;

    for(int i = 0; i < temp.size(); i++){
        prob = cos(temp[i] - 758);
        if(prob > max)
            max = prob;
    }
    return max;
}
