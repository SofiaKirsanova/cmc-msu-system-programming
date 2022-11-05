// Описать класс А таким образом, чтобы все конструкции функции main () были
// верными, а на экран выдалось 100 300.


#include <iostream>
using namespace std;

class A
{
    int a;
    public: 
        A(int tmp)
        {
            a = tmp;
        }
        A & operator *=(int b)
        {
            a *= b;
            return *this;
        }
        A & operator *=(A & b)
        {
            a *= b.a;
            return *this;
        }
        int get()
        {
            return a;
        }

};

int main () 
{
    A a1 (5), a2 = 3;
    a1 *= 10; // перегрузка для int 
    a2 *= a1 *= 2; // сначала перегрузка для int, затем для класса
    cout << a1.get() << a2.get() << endl;
    return 0;
}