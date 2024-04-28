#include<iostream>
using namespace std;
int fact(int n,int prod){
    if(n==1){
        return prod;
    }
    return fact(n-1,prod*n);
}
int main(){
    int f=fact(9,1);
    cout<<f<<endl;
    return 0;
}