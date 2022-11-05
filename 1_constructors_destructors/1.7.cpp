// Описать класс А так, чтобы:
// - все конструкции функции main были верными,
// - явно в классе А можно описать не более одного конструктора,
// - на экран выдалось 15 60 7.
// Нельзя использовать исключения и любые функции досрочного завершения программы.

#include <iostream>
using namespace std;

class A
{
    int a;
    public:
        A(int tmp = 7)
        {
            a = tmp;
        }
        int operator *=(int tmp)
        {
            a = a * tmp;
            return a;
        }   
        int get()
        {
            return a;
        }
};

int main () 
{
    A a1(5), a2 = 4, a3;
    a2 *= a1 *= 3;
    cout << a1.get() << ' ' << a2.get() << ' ' << a3.get() << endl;
    return 0;
}