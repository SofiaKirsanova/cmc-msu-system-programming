// Описать класс B таким образом, чтобы все конструкции функции main были
// верными, а на экран выдалось 10 20 30


#include <iostream>
using namespace std;

class B
{
    int b;
    public:
        B(int tmp = 0) // для b1
        {
            b = tmp + 10;
            cout << 1;
        }
        B(const B & tmp) // для b2 и b3
        {
            b = tmp.b + 10;
            cout << 4;
        }
        int get()
        {
            return b;
        }
        
};

int main () 
{
    B b1, b2 = b1, b3 (b2);
    cout << b1.get() << b2.get() << b3.get () << endl;
    return 0;
}
