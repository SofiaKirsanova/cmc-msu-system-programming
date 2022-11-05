// Описать класс С так, чтобы:
// - в main ошибочным было только описание объекта с2,
// - класс C содержал только один явно описанный конструктор,
// Нельзя использовать исключения и любые функции досрочного завершения программы.
#include <iostream>
using namespace std;
class C
{
    int *b;
    int c;
    public:
        explicit C(int tmp) // чтобы не происходило неявного преобразования типов
        {
            c = tmp * 2;
        }
        int operator +(C & tmp) const
        {
            return (c + tmp.c);
        }
    
        int get()
        {
            return c;
        }
};
// - после удаления описания с2 на экран выдалось 14 56.
int main () 
{
    C c1(7);
    // C c2 = 5;
    C c3(c1 + c1);
    cout << c1.get() << ' ' << c3.get() << endl;
    return 0;
}