#include<iostream>
using namespace std;
void printer(string s,int n){
    if(n==0){
        return;
    }
    cout<<n<<" -> "<<s<<endl;
    printer(s,n-1);
}
int main(){
    printer("Kailash",9);
    return 0;
}