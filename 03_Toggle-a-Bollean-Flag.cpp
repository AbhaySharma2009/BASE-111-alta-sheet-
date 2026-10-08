#include<iostream>
using namespace std;

int main(){
    bool value;
    cin>>value;
    cout<<"Initial value "<<value<<endl;

    bool toggled= !value;
    cout<<"Togggled value "<<toggled<<endl;
    return 0;

}