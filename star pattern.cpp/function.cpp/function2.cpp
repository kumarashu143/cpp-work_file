#include <iostream>
using namespace std;
// void odd_even(int a)
void odd_even(int a)
{
    if (a == 0)
        cout << "neutral number";
    else if (a % 2 == 1)
        cout << " odd number";
    else
        cout << " even number";
}

 main()
{
    cout << " enter a numnber for odd even\n";
    int num;
    cin >> num;
    odd_even(num);
   
}