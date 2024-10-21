#include<iostream>
using namespace std;
int main()
{
  int n;
  int i;
  cout<<"enter the number u want table of"<<endl;
  cin>>n;

  for(i=1; i<=10; i++)
  {
    cout<<n<<'*'<<i<<"="<<n*i<<endl;
  }
  return 0;
}



