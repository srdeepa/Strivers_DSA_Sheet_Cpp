#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int n,int k){
       //code here
       int flag = 0;
       for(int i=0;i<n;i++){
           if(k == arr[i]){
               flag = 1;
           }
        }
        if(flag == 1){
            cout << "Element is found " << endl;
        }
        else{
            cout << "Element was not found" << endl;
        }
}
    
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int k;
    cout << "Enter the search key"<< endl;
    cin >> k;
    linearSearch(arr,n,k);
    return 0;
}
