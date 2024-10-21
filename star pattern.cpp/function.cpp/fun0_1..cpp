#include <iostream>
using namespace std;
void mul_1(int a); // function declaration.

void mul_1(int a) // function defination
{

    for (int i = 1; i <= 10; i++)
        cout << a << "*" << i << "=" << a * i << endl;
}

int main()
{

    int a;
    cin >> a;

    mul_1(a); // function call
    return 0;
}