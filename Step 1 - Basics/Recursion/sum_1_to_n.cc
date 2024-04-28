#include<iostream>
using namespace std;
int summer(int n,int sum){
    if(n==0){
        return sum;
    }
    return summer(n-1,sum+n);
}
int main(){
    int x=summer(100,0);
    cout<<x<<endl;
    return 0;
}