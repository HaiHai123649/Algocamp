#include<iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include<map>
#include<string>
#include<vector>
using namespace std;
bool num[2000005];
int main(){
	int n;
	cin>>n;
	int arr[n];
	double a[n];
	int t[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>t[i];
		arr[i] = a[i]*t[i];
	}
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
			max = arr[i];
	}
	for(int i=0;i<=max;i++){
		num[i] = 0;
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=t[i];j++){
			num[(int)(a[i]*j)] = !num[(int)(a[i]*j)];
		}
	}
	for(int i=0;i<=max;i++){
		if(num[i]==1)
			cout<<i;
	}
	return 0;
}
