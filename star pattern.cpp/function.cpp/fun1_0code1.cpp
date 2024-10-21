#include<iostream>
using namespace std;

int mul()
{
    cout<<"enetr number u want  table";
    int n;
    cin>>n;
   
    for(int i=1; i<=10; i++){
      int d=n*i;
     cout<<d<<endl;
    }
    return 0;


}


int main()
{
 mul();




}