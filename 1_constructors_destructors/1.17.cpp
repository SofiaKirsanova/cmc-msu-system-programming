// Что будет выдано на печать при работе следующей программы?

#include <iostream>
using namespace std;

struct S 
{
    int x;
    S(int n) { x = n; printf(" cons "); }
    S(const S & a) { x = a.x; printf(" copy "); }
    ~S() { printf("des "); }
};

S f( S & y ) // здесь не создаётся конструктор, а просто передаётся по ссылке
{
    y = S(3); // cons для временного объекта S(3) 
    // des для S(3)
    // copy для y
    return y;
    // des для y
}
// cons cons des copy des 3 des
int main () 
{
    S s(1); // cons
    f(s); // переход в функцию
    printf("%d ", s.x); // 3
    return 0;
    // des
} 
