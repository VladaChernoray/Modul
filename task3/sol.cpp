int num = 1;
int Num = 100;

class Base{
public:
    Base() {
        N = num;
        num++;
    }
    virtual ~Base() {
        Num = 2 * Num + N - 16;
    }
    int getN() {
        return N;
    }

protected:
    int N;
};

class Alpha : public Base {
public:
    Alpha() : Base() {}
    ~Alpha() {
        Num = Num - N;
    }
};

class Beta : public Base {
public:
    Beta() : Base() {}
    ~Beta() {
        Num = Num + 4 * N + 16;
    }
};

class Red : public Alpha {
public:
    Red() : Alpha() {}
    ~Red() {
        Num = Num + N / 4;
    }
};

class Green : public Alpha {
public:
    Green() : Alpha() {}
    ~Green() {
        Num = Num - N / 2 - 8;
    }
};

int func_prediction(stack<pair<string, int> > a) {
    int temp = Num;

    while (!a.empty()) {
        pair<string, int> object = a.top();
        if (object.first == "Base") {
            temp = 2 * temp + object.second - 16;
        }
        else
            if (object.first == "Alpha") {
            temp = temp - object.second;
            temp = 2 * temp + object.second - 16;
        }
        else
            if (object.first == "Beta") {
            temp = temp + 4 * object.second + 16;
            temp = 2 * temp + object.second - 16;
        }
        else
            if (object.first == "Red") {
            temp = temp + object.second / 4;
            temp = temp - object.second;
            temp = 2 * temp + object.second - 16;
        }
        else
            if (object.first == "Green") {
            temp = temp - object.second / 2 - 8;
            temp = temp - object.second;
            temp = 2 * temp + object.second - 16;
        }
        a.pop();
    }
    return temp;
}
