// Что напечатает следующая программа?

#include <iostream>
using namespace std;

class I 
{
    int i;
    public:
        I() : i(9)
        {
            cout << "sun" <<endl;
        }
        I(int a) : i(a)
        {
            cout << "venus " << i << endl;
        }
        I(const I & other) : i(other.i) 
        {
            cout << "earth " << i << endl;
        }
        ~I()
        {
            cout << "moon" << endl;
        }
        int Get()
        {
            return i;
        }
        void operator+= (const I & op)
        {
            i += op.i;
        }
};
/// sun, venus 20, 1429 420, moon, moon
void f(I & x, I y) // earth 420
{
    y += 1000; // venus 1000, moon
    x += y; 
    // moon
}
int main() 
{
    I i1; // sun
    I i2(20); //venus 20
    i2 += 400; // venus 400, moon
    f(i1, i2);
    cout << i1.Get() << i2.Get() << endl; //1429420
    //moon moon
    return 0;
}