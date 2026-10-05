#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int year=n/365;
    int a = n%365;
    int month = a/30;
    int days = a%30;
    cout<< year<<"years "<<month<<"month "<<days<<"days";
}