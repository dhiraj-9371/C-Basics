#include<iostream>
using namespace std;
int main(){
    int pencil;
    cout<<"Enter the cost of pencil : ";
    cin>>pencil;
    int pen;
    cout<<"Enter the cost of pen : ";
    cin>>pen;
    int eraser;
    cout<<"Enter the cost of eraser : ";
    cin>>eraser;
    int total = pencil + pen + eraser;
    cout<<"The total cost of three items is : "<<total<<endl;
    
    return 0;
}