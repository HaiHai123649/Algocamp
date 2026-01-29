#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n=0;
	cin>>n;
	int num[3]={0};
	int priece[3]={0};

	for(int i=0;i<3;i++){
		cin>>num[i]>>priece[i];
	}
	int money[3]={0};
	int temp = 0;
	// 购买的包数 = (n + 每包数量 - 1) / 每包数量
	for(int j=0;j<3;j++){
		int packs = (n + num[j] - 1) / num[j];
		money[j] = packs * priece[j];
	}
	
	cout<<min(money[2],min(money[0],money[1]));
	
	return 0;
}
