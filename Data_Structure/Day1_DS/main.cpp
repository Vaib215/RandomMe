#include<iostream>
using namespace std;

int main()
{
    bool isNum = true;
    int count=1;
    for(int i=0;i<4;i++){
        for(int j=3-i;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<2*count<<" ";
        }
        count++;

        cout<<"\n";
    }
    count -=2;
    for(int i=0;i<3;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=3-i;j>0;j--){
            cout<<2*count<<" ";
        }
        count--;

        cout<<"\n";
    }
}