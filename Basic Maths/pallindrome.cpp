#include<bits/stdc++.h>
using namespace std;

bool pallindrome(int n){
    int rev = 0;
    int dup = n;
    while(n>0){
        int lastDigit = n % 10;
        n = n/10;
        rev = (rev*10) + lastDigit;
    }
    if(rev == dup){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    cout << pallindrome(n);
}
    
