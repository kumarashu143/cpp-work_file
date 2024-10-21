#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter ur number";
    cin>>n;
    for (int i = 1; i <=10; i++)
     {

    if (i == 4) {
      continue;
    }
    if (i == 6) {
      continue;
    }
    cout << n <<"*"<<i<<"="<<n*i<<endl;
  }   
  return 0;
}
