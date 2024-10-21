#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter ur number please"<<endl;
    cin>>a;

    if(a>0)
    {
        cout<<"posetive number"<<endl;

        cout<<" square root of a number is"<<" "<<a*a<<endl;

    }

    else if(a<0)
    {
        cout<<"negative number"<<endl;
     cout<<"number raised to power 5 is"<<" "<<a*a*a*a*a<<endl;    
    }

    else{
        cout<<" number is zero"<<endl;
    }

    

    
    return 0;
}