#include<iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main(){
	int arr[12];
	for(int i=0;i<12;i++)
		cin>>arr[i];
		int hand=0;
		int sum=0;
	for(int i=1;i<=12;i++){
		hand += 300;
		hand = hand-arr[i-1];
		if(hand<0){
			cout<<-i;
			return 0; 
		}
			
		sum += hand - hand%100;
		hand %= 100; 
	}
	cout<<sum*1.2+hand;
	return 0;
} 
