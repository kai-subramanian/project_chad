#include<iostream>
using namespace std;
void printer(string s,int n){
    if(n==0){
        return;
    }
    printer(s,n-1);
    cout<<n<<" -> "<<s<<endl;
}
int main(){ 
    printer("Kailash",9);
    return 0;
}