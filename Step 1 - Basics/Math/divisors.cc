#include<iostream>
#include<cmath>
int main(){
    uint32_t x=121;
    std::cout<<x<<std::endl;
    for(uint32_t i=1;i<=sqrt(x);i++){
        if(x%i==0){
            std::cout<<i<<" ";
            if(i!=x/i){
                std::cout<<x/i<<" ";
            }
        }
    }
    std::cout<<std::endl;
    return 0;
}