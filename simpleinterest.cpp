#include<iostream>
using namespace std;
int main(){
    int principal;
    cout<<"Enter principal amount : ";
    cin>>principal;

    int rate;
    cout<<"Enter rate of interest : ";
    cin>>rate;

    int time;
    cout<<"Enter time in days : ";
    cin>>time;
    
    int simpleInterest = (principal * rate * time)/100;
    cout<<"The simple interest is : "<<simpleInterest;
    return 0;
}