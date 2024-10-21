#include<iostream>
using namespace std;

int main()
{
    int age;
    int fees;
    int qualification;

    string nation;
cout<<"enter ur age"<<endl;
    cin>>age;

    if(age>=18)
    {
      cout<<"enter ur fees"<<endl;
    cin>>fees;

    if(fees>=1500)
    {
      cout<<"eligible move to next step"<<endl;
    }

    else{
      cout<<"not"<<endl;
    }

    

    cout<<"enter ur qualification"<<endl;
    cin>>qualification;
    if(qualification>=8)
    {
      cout<<"u r eligible move to next step"<<endl;
    }

    else{
      cout<<" sorry gentlemen ! u r not eligible"<<endl;
    }
    
    cout<<"enter ur nationality"<<endl;
cin>>nation;
    if(nation=="indian") {

      cout<<" u r finally eligible"<<endl;
    }

    else{
      cout<<"not eligible";
    }

    }

    else{
      cout<<"not"<<endl;
    }

   
    
}
    