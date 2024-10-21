#include<iostream>
using namespace std;
int main()
{
    int base;
    cout<<"enter the number";
    cin>>base;
int num;
num=base;
    int exponential;
     cout<<"enter the exponential";
    cin>>exponential;
    
     for(int i=1; i<=exponential; i++){

     num=base*num;
     }
     cout<<num;

    
    return 0;
}
