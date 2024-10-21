#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=10; i++){
for ( int j=1; j<=10-i; j++)cout<<" ";
for ( int k=1; k<=i; k++) cout <<"* ";
cout<<endl;   
}


for(int I=10; I>=1; I--){
for ( int J=1; J<=10+I; J++)cout<<" ";
for ( int K=10; K>=I; K--) cout <<"* ";
cout<<endl;   
}




}

