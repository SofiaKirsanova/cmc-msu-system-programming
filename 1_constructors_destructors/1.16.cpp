// Что будет выдано на печать при работе следующей программы?


#include <iostream>
using namespace std;

struct S 
{
    int x;
    S (int n) { x = n; printf (" cons "); }
    S (const S & a) { x = a.x; printf (" copy "); }
    ~S() { printf (" des "); }
};

S f(S y) // copy так как функция тоже объект класса
{
    y = S(3); // cons так как обычный конструктор для ВРЕМЕННОГО S(3)
    // des умирает S(3)
    // copy так как возвращаемое значение копируется в y
    
    return y;
    // des умирает y
}


// cons 
// copy  cons  des  copy  des
// des 1 des

int main () 
{
    S s (1); // cons
    f(s); // переход в функцию
    printf ("%d ", s.x); // des 1
    return 0;
    // des
} 