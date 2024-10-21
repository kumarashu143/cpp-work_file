#include<iostream>
using namespace std;
int main()
{

    int  sum=0;
    int m;
    cout<<"enter the no for natural no"<<endl;
    cin>>m;

    int Sum=0;

    int n;
    cout<<"enter the number for rev natural no"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum=sum+i;

        cout<<sum<<endl;
    }


    for(int f=1; f<=m; f++)
{
    Sum=Sum+f;
    cout<<Sum<<endl;
}

int final_result=Sum-sum;

cout<<final_result<<endl;10
    return 0;
}