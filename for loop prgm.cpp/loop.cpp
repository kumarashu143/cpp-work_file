#include<iostream>
using namespace std;

int main()
{

    int n,sum=0;
    cout<<"enter natural no";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum+=i;
        
    }

    cout<<sum<<n<<endl;
    return 0;
}
