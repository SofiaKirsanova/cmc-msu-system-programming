// Какие конструкторы и деструкторы и в каком порядке будут выполняться при
// работе следующего фрагмента программы:

#include <iostream>
using namespace std;
class A {void print(){cout << "A";}};
class B : public A {void print(){cout << "B";}};
class C : public B {void print(){cout << "C";}};

// C B 

int main()
{
    C c;
    A a = c;
    struct D 
    {
        B b;
        D(): b(5){}
    } d;
}
