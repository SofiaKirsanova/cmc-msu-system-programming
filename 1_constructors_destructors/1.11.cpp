// Что напечатает следующая программа?

#include <iostream>
using namespace std;

class I
{
    int i;
    public:
        I() : i(6) { cout << "owl" << endl; }

        I(int a) : i(a) { cout << "sheep " << i << endl; }

        I(const I & other) : i(other.i) { cout << "horse " << i << endl; }

        ~I() { cout << "wolf" << endl; }

        int Get() { return i; }

        void operator*=(const I & op) { i*=op.i; }
};

void f(I x, I & y) // horse 7
{
    x *= 1; // sheep 1
    y *= x; 
    // wolf, wolf
}
// owl, sheep 3, sheep 7, wolf, horse 42, sheep 1, wolf, wolf, 42, 126, wolf, wolf
int main()
{
    I i1; // owl
    I i2(3); //sheep 3
    i1 *= 7; // sheep 7, wolf
    f(i1, i2); 
    cout << i1.Get() << ' ' << i2.Get()<< endl; // 42, 126
    // wolf, wolf
    return 0;
}