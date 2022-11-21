// Что будет выдано на печать при работе следующей программы?

#include <iostream>
using namespace std;

struct S 
{
int x;
    S(int n) { x = n; printf(" cons ");}
    S(const S & a) { x = a.x; printf(" copy ");}
    ~S() {printf("des ");}
};

S & f(S y, S & z) // copy для y, для z не нужен конструктор, тк передаём его по ссылке
{
    y = S(3); // cons для временного S(3)
    // des для S(3)
    return z;
    // des для y
}
// cons 
// copy cons des des 
// 1 des
int main() 
{
    S s(1); // cons
    f(s, s); // переход в функцию
    printf("%d ", s.x); // 1
    return 0;
    // des
}