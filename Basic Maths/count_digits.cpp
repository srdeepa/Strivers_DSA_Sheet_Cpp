#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt = 0;
    int ogNo = n;
    while(n>0){
        int digit = n % 10;
        if(digit != 0 && ogNo % digit == 0){
            cnt ++;
        }
        n = n/10;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout << count(n);
}
    
