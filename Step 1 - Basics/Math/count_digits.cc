#include<iostream>
using namespace std;

int main(){
    int x=10000;
    int i=x;
    int c=0;
    while(x!=0){
        x=x/10;
        c+=1;
    }
    cout<< "Digit "<<i<<" is "<<c<<" digits long"<<endl;
    return 0;
}