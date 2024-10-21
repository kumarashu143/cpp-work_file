#include<iostream>
using namespace std;
int largest(int a, int b, int c, int d)
{
    if(a>b&&a>c&&a>d)
    {
        return a;
    }

    else if(b>a&&b>c&&b>d)
    {
        return b;
    }

    else if(c>a&&c>b&&c>d)
    {
        return c;
    }

    else{
        return d;
    }
}
int main()
{
    cout<<"enetr 4 no to get largest"<<endl;

    int w,x,y,z;

    cin>>w>>x>>y>>z;

int k=    largest(w,x,y,z);
cout<< "largest value is" << k;
}