#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter ur first number"<<endl;
    cin>>a;
    cout<<"enter ur second number"<<endl;
    cin>>b;
    cout<<"enter ur third number"<<endl;
    cin>>c;
     if(a>b&&b>c)
     {
        cout<<"b is the middle number"<<b<<endl;
     }
else if(b>a&&b<c)
{
   cout<<"b is the middle number"<<b;
}


     else if(b<a&&a<c)    
     {
        cout<<"a is the middle number"<<a<<endl;
     }

     else if(a<b&&a>c)
     {
        cout<<"a is the middle number"<<a<<endl;
     }

     else if(c>a&&c<b)

     {
        cout<<"c is the middle number"<<c<<endl;
     }

     else if(c<a&&c>b)
     {
        cout<<"c is middle number"<<endl<<endl;
     }


     else
     {
        cout<<"program exist";
     }
    return 0;
}