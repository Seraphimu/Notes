#include <iostream>

using namespace std;

class Test {
    public:
        int a, b;
        int Add() {
           return a + b; 
        }
    private:
        int c, d;
        int Mul() {
            return c * d;
        }
};

int main(void) {
    Test t;
    t.a = 114;
    t.b = 514;
    cout << t.Add() << endl;

//    t.c = 1919;
//    t.d = 810;
//    cout << t.Mul() << endl;

    return 0;
}
