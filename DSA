// decimal to binary 

#include <iostream>
using namespace std;

int deci_bin(int num){
    int ans=0;
    int pow=1;
    while(num>0){
    int rem;
    rem=num%2;
    num=num/2;
    ans=ans+(rem*pow);
    pow=pow*10;
}
return ans;
}
int main(){
    int a;
    cout<<"enter the decimal number:";
    cin>>a;
    cout<<"binary representation:"<<deci_bin(a);
    return 0;
}


//binary to decimal
#include<iostream>
using namespace std;
int bin_deci(int y){
    int ans=0;
    int pow=1;
    while(y>0){
        int rem;
        rem=y%10;
        y=y/10;
        ans=ans+(rem*pow);
        pow=pow*2;
    }
    return ans;
}
int main(){
    int b;
    cout<<"enter the binary number:";
    cin>>b;
    cout<<"decimal representation:"<<bin_deci(b);
    return 0;
}
