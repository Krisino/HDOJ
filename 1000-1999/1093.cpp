#include<iostream>
using namespace std;
int main(){
	int n,m,a,s;
	cin >> n;
	for(;n>0;n--){
		cin >> m;
		s = 0;
		for(;m>0;m--){
			cin >> a;
			s+=a;
		}
		cout << s << endl;
	} 
	return 0;
}
