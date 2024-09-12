//User function template for C++
class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	   vector<int> ans;
	   int solved=0;
	   for(int i=(n+1)/2;i<n;i++){
	       if(num[i]<num[n-i-1]){
	           for(int j=i;j<n;j++){
	               num[j]=num[n-j-1];
	           }
	           solved=1; break;
	       } else if(num[i]>num[n-i-1]) break;
	   }
	   
	   if(solved){
	       for(int i=0;i<n;i++) ans.push_back(num[i]);
	       return ans;
	   }
	   
	   int carry =1;
	   for(int i=(n-1)/2;i>=0;i--){
	       if(num[i]+carry==10){
	           num[i]=0;
	       } else{
	           num[i]++; carry=0;
	           break;
	       }
	   }
	   
	   if(carry) ans.push_back(1);
	   for(int i=0;i<n;i++) ans.push_back(num[i]);
	   if(carry) n++;
	   
	   for(int i=(n+1)/2;i<n;i++) ans[i]=ans[n-i-1];
	   
	   return ans;
	}

};
