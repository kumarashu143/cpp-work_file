#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number from 1-7 to know days"<<endl;
    cin>>num;
    switch (num)
    {
    case 1:
     cout<<"monday"<<endl;

        break;
        case 2:
     cout<<"tuesday"<<endl;
break;

case 3:
     cout<<"wednesday"<<endl;

        break;

        case 4:
     cout<<"thrusday"<<endl;

        break;
        case 5:
     cout<<"friday"<<endl;

        break;
        case 6:
        cout<<"saturday"<<endl;
        break;
    default:

    cout<<"invalid choice";
        break;
    }
    return 0;
}