#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n;
    cout<<"enter the number"<<endl;
    cin>>n;

    for(int i=1; i<=10; i++)
    {
        cout<<setprecision(2);
        cout<<n<<'*'<<i<<"="<<n*i<<endl;
    }
    return 0;
}