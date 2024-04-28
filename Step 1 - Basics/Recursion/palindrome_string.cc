#include<iostream>
using namespace std;

bool palindrome(string s,int i){
    if(i>s.length()/2){
        return true;
    }
    if(s[i]!=s[s.length()-i-1]){
        return false;
    }
    return palindrome(s,i+1);
}

int main(){
    string name="racecar";
    bool ans=palindrome(name,0);
    if(ans){
        cout<<"Yes, palindrome"<<endl;
    }else{
        cout<<"No, not palindrome"<<endl;
    }
    return 0;
}