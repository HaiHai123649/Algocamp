#include<iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(n>i){
		n -= i;
		i++;
		
	}
	if(i%2 == 0) 
	{
		cout<<n<<"/"<<i-n+1;
	}
	else
	{
		cout<<i-n+1<<"/"<<n;	
	}	
} 
