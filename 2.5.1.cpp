#include <iostream>
#include <algorithm> 
using namespace std;
struct person{
	int id;
	int score;
};
bool cmp(person a,person b){
	if(a.score != b.score)
		return a.score>b.score;
	return a.id<b.id;
}
int main(){
	int n,m;
	cin>>n>>m;
	person p[5005];
	int num=0;
	for(int i=0;i<n;i++){
		cin>>p[i].id>>p[i].score;
	}
	sort(p,p+n,cmp);
	for(int i=0;i<n;i++){
		if(p[i].score>=p[(int)(m*1.5)-1].score)
			num++;
	}
	cout<<p[(int)(m*1.5)-1].score<<" "<<num<<endl;
	for(int i=0;i<num;i++){
		cout<<p[i].id<<" "<<p[i].score<<endl;
	}
	return 0;
}
