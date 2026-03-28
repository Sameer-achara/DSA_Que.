#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter the string: ";
    cin>>name;
    int length=strlen(name);
    int left=0;
    int right=length-1;
    while(left<=right){
        if(name[left] != name[right]){
            cout<<"Not Palindrome";
            return 0; // exit immediately on mismatch
        }
        else{
            left++;
            right--;
        }
    }
    cout<<"Palindrome";
    return 0;
}
