// Описать класс C таким образом, чтобы все конструкции функции main были
// верными, а на экран выдалось 14 10 48.

#include <iostream>
using namespace std;

class C
{
    int c;
    public:
        C(int tmp = 0)
        {
            c = tmp * 2;
        }
        int operator +(C & tmp)
        {
            return c + tmp.c;
        }
        int get()
        {
            return c;
        }
};

int main () 
{
    C c1 (7), c2 = 5, c3 (c1 + c2);
    cout << c1.get() << c2.get() << c3.get () << endl;
    return 0;
}