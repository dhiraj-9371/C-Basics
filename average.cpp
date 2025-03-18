#include<iostream>
using namespace std;
int main(){
    int english;
    cout<<"Enter english marks : ";
    cin>>english;
    int maths;
    cout<<"Enter maths marks : ";
    cin>>maths;
    int science;
    cout<<"Enter science marks : ";
    cin>>science;
    int marathi;
    cout<<"Enter marathi marks : ";
    cin>>marathi;
    int hindi;
    cout<<"Enter hindi marks : ";
    cin>>hindi;

    int avg = (english + hindi + maths + science + marathi)/5;
    cout<<"Your average marks are : "<<avg;

    return 0;
}