#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt = 0;
    int ogNo = n;
    while(n>0){
        int digit = ogNo % 10;
        if(digit != 0 && digit % ogNo == 0){
            cnt ++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    count(n);
}
    
