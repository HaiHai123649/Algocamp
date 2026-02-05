#include <iostream>
using namespace std;
//定义数组防止越界 
int n,m;
char map[105][105];
int dx[] = {-1,1,0,0,-1,1,-1,1};
int dy[] = {0,0,-1,1,-1,-1,1,1};
int main(){
	//输入 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	//遇见*打*遇见？进行计数，不改变原数组值输出更保险 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j] == '*')
				cout<<'*';
				//方向数组的判断 
			else{
				int sum = 0;
				for(int d=0;d<8;d++){
					int nx = i+dx[d];
					int my = j+dy[d];
					if(nx>=0&&nx<n&&my>=0&&my<m){
						if(map[nx][my] == '*')
							sum++;
					}
				}
				cout<<sum;
			}
		}
	cout<<endl;
	}
		return 0;
}
