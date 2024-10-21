#include<iostream>
using namespace std;

string check()
{
    cout<<"enetr number u want to check"<<endl;
    int a;
    cin>>a;
    
    if(a==0)
    {
    return "neutral";
    }

    else if(a%2==0)
    {
        return "even";
    }

    else{
       return "odd";
    }

    
}

int main()
{
  string result= check();
  cout<<result;

  
}