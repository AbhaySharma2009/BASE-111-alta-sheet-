// Write a program to accept two integer values from standard input, store them in variables 'a' and 'b', and swap their contents using a third temporary variable 'temp'. Print the values before and after swapping.

#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cin>>a>>b;

    cout<<"befor swaping " << a << " , " << b<<endl;

    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping " << a << " , "<<b <<endl;
}