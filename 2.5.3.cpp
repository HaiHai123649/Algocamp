#include <iostream>
#include <algorithm>
#include <ctime>
#include<set>
using namespace std;
int main() {
   int n,x;
   cin>>n;
   set<int> s;
   for(int i=0;i<n;i++){
   		cin>>x;
   		s.insert(x);
   }
   cout<<s.size()<<endl;
   for(int num : s){
   		cout<<num<<" ";
   }
    return 0;
}
