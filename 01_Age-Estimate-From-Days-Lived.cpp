//Write a program that takes the total number of days a person has lived as an integer input and calculates their approximate age in years, months, and remaining days. Assume 1 year = 365 days and 1 month = 30 days.

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