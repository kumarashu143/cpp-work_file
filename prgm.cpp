#include<iostream>
using namespace std;
int main()
{
    float salary=50000;
    float debit;
    float balance;
    int months;
    int sum=0;
cout<<"eneter the month"<<endl;
cin>>months;

    float total_Salary=salary*months;

cout<<"the total salary is credit is"<<total_Salary<<endl;

for(int i=1; i<=months; i++)
{
    cout<<"eneter the amount debit"<<endl;
    cin>>debit;
    sum=sum+debit;
    cout<<"the total debit is"<<sum;
}

balance=total_Salary-sum;

cout<<"the total balance is"<<" "<<balance<<endl;
if(sum>total_Salary)
{
    cout<<"pls dont debit money ur total balance is zero";

}

else
{
    cout<<"u can spend money and enjoy it";
}



    return 0;
}