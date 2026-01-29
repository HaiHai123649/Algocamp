#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<map>
#include<vector>
#include <algorithm>  
using namespace std;
int main(){
	int l,r;
	cin>>l>>r;
	int sum=0;
	for(int i=l;i<=r;i++){	
	int temp = i;
		for(;temp;temp/=10){
			if(temp%10==2)
				sum++;
		}			
	}
	cout<<sum;
	return 0;
}
