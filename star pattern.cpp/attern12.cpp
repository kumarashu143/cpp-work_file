#include<iostream>
using namespace std;
int main()
{
    char count='*';
    int row;
    for(row=1; row<=5; row++)
    {
        for(int col=1; col<=row; col++)
        {
        cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
}