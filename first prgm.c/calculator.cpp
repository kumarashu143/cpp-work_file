#include<iostream>
using namespace std;
int main()

{

    int result;
    char sign;
    int a;
    int b;

   do
   {
    
   
    
    
    
	    
	    cout << "Please enter an operation +, -, *, / , ";
        cin >> sign;
		cout << "Please enter a number: "<<endl;
        cin >> a;
        cin>>b;


		if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
		{
			cout << "Unknown operator " << sign <<endl;
		}
		else
		{
			
			if (sign = '+') 
			{
			    result =a+b;
                cout<<result;
			}
else
			{
				if (sign = '-')
				{
					result = a-b;
                     cout<<result;
				}
				else
				{
					if (sign = '*')
					{
						result = a*b;
                         cout<<result;
					}
					else
					{
						if (sign = '/')
						{
							result = a/b;
                             cout<<result;
						}
					}
				}
			}
		}

		

    }
    
	while(1)   ;

    
}





