 #include<iostream>
 #include<math.h>
 using namespace std;
 int main()
 {
    int base;
    cout<<"enetr the number for which u want to calculate power";
    cin>>base;

    int exponential;
    cout<<"enter the value of exponential";
    cin>>exponential;

    int power=pow(base,exponential);
   
    cout<<power;

    
    return 0;
 }