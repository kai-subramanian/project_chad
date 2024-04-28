#include<iostream>
using namespace std;
int fibber(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibber(n-1)+fibber(n-2);
}
int main(){
    cout<<fibber(5)<<endl;
    return 0;
}