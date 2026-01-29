//#include <iostream>     // 输入输出 (cin, cout)
//#include <cstdio>       // 快速读写 (scanf, printf)
//#include <cstring>      // 字符串处理 (memset, strlen)
//#include <algorithm>    // 算法 (sort, max, min, next_permutation)
//#include <cmath>        // 数学 (pow, sqrt, abs)
//#include <vector>       // 动态数组 (vector)
// #include <map>
// #include <string>
//
//using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include <cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int a[10] = {0};
	for(int i=0;i<10;i++){	
		cin>>a[i];
	}
	int h = 0;
	cin>>h;
	int sum=0;
	for(int j=0;j<10;j++){
		if((h+30)>=a[j]){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
