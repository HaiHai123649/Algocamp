#include<iostream>
using  namespace std;
int n;
int m;
int k[10005];
int s[10005];
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>k[i]>>s[i];
	}
	 for(int i=0;i<n-1;i++){
	 	for(int j=0;j<n-i-1;j++){
	 		if(s[j]<s[j+1]){
	 			swap(s[j],s[j+1]);
				swap(k[j],k[j+1]); 
			 }
			 if(s[j] == s[j+1]){
			 	if(k[j]>k[j+1]){
			 		swap(k[j],k[j+1]); 
				 }
			 }
		 }
	 }
	 int min = s[(int)(m*1.5)-1];
	 int num = n;
	 for(int i=0;i<n;i++){
	 	if(s[i]<min){
	 		num--;
		 }
	 } 
	 cout<<s[(int)(m*1.5)-1]<<" "<<num<<endl;
	 for(int i=0;i<num;i++){
	 	cout<<k[i]<<" "<<s[i]<<endl;
	 }
	return 0;
}
