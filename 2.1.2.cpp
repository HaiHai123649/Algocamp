#include<iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include<map>
#include<string>
#include<vector>
	bool arr[100005] ;
using namespace std;
int main(){
	int l,m; 
	cin>>l>>m;
	int u[m],v[m];
	int sum=0;
	
		for(int i=0;i<=l;i++){
			arr[i] = 1;
		}
	for(int i=0;i<m;i++){
		cin>>u[i]>>v[i];
		for(int j=u[i];j<=v[i];j++){
			arr[j] = 0;
		}
	}
	for(int i=0;i<=l;i++){
		if(arr[i] == 1){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
