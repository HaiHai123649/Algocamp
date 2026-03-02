#include <iostream>
#include <vector> 
using namespace std;
int N,M,T,SX,SY,FX,FY;
int mx[4] = {0,0,-1,1};
int my[4] = {1,-1,0,0};
int dx,dy;	
bool map[10][10] = {false};
int all = 0;
void dfs(int SX,int SY,int FX,int FY){
	if(SX == FX && SY == FY){
		all++;
		return ;
	}
	for(int i=0;i<4;i++){
		int nx = SX+mx[i];
		int ny = SY+my[i];
		if(nx<=N && ny<=M && nx>=1 && ny>=1 && map[nx][ny] == false){
			map[nx][ny] = true;
			dfs(nx,ny,FX,FY);
			map[nx][ny] = false;
		}
	}
}
int main(){
	cin>>N>>M>>T;
	cin>>SX>>SY>>FX>>FY;

	for(int i=0;i<T;i++){
		cin>>dx>>dy;
		map[dx][dy] = true;
	}
	dfs(SX,SY,FX,FY);
	cout<<all;
	return 0;
}
