// Опишите структуру с именем smartstr, удовлетворяющую двум условиям:
// (1) можно создать объект типа smartstr;
// (2) нельзя создать массив элементов типа smartstr в динамической памяти.

#include <iostream>
using namespace std;

struct smartstr
{
    smartstr(int a) {}
    private:
        smartstr(){};
};

int main()
{
    smartstr s1(3); // без параметров не работает
    smartstr *s2 = new smartstr[4];
}