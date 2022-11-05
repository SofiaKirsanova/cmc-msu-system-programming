// Описать класс В так, чтобы:
// - все конструкции функции main были верными,
// - класс В содержал только один явно описанный конструктор,

// Нельзя использовать исключения и любые функции досрочного завершения программы.

#include <iostream>
using namespace std;
class B
{
    int b;
    public:
        B(int x = 1, int y = 1)
        {
            b = (x - y) + 6;
        }
        B & operator +=(B & tmp)
        {
            b = b + tmp.b;
            return *this;
        }   
        int get()
        {
            return b;
        }
};
// - на экран выдалось 17 11 6.
int main () 
{
    B b1 (1), b2(2, 3), b3 (b1);
    b1 += b2 += b3;
    cout << b1.get() << ' ' << b2.get() << ' ' << b3.get () << endl;
    return 0;
}