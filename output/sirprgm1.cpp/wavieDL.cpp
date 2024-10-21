#include<iostream>
using namespace std;
int main()
{
    int age;
    int qualifiction;
    int fees;
    int wavier;

    int wavier2;

    
    cout<<"enter age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"eligible"<<endl;




    }

    else 

    {
        cout<<"do u have wavier from MLA anser 1 for yes and 0 for no"<<endl;

        cin>>wavier;

        if(wavier == 1)
        {
            cout<<"move to next step"<<endl;
        }

        else{
            cout<<"not eligible"<<endl;
        }

        cout<<"enter qualification"<<endl;
        cin>>qualifiction;

        if(qualifiction>=8)
        {
cout<<"eligible"<<endl;
        }

    else
{
    cout<<"do u have wavier from goverment"<<endl;
    cin>>wavier2;

    if(wavier2==1)
    {
        cout<<"eligible"<<endl;
    }
    else{
        cout<<"not eligible"<<endl;
    }
}

    }



    return 0;
}   