#include<iostream>
using namespace std;

int main()
{

 int notes500;   
 int notes200;

 int notes100;
 int min;

 int max;



 
int amount ;
cout<<"enter amount "<<endl;
cin>>amount;

notes500=amount/500;

cout<<"total 500 notes required is"<<" "<<notes500<<endl;
notes200=amount%500;
max=notes200/200;

min=notes200%200;




cout<<"rest 200 amount needed is"<<" "<<max<<endl;

cout<<"rest amopunt needed to complete total amount is"<<" "<<min<<endl;




return 0;

}