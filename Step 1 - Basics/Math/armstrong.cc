#include<iostream>
#include<cmath>
using namespace std;

int digitCount(int x){
    int c=0;
    while(x!=0){
        x=x/10;
        c+=1;
    }
    return c;
}

int main(){
    int num=153;
    int i=num;
    int sum=0;
    int power=digitCount(num);
    while(num!=0){
        int rem=num%10;
        sum+=(pow(rem, power));
        num=num/10;
    }
    if(sum==i){
        cout<<"Yes, Armstrong"<<endl;
    }else{
        cout<<"No, Not Armstrong"<<endl;
    }
    return 0;
}