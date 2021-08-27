#include<iostream>
using namespace std;
int main(){
	int n,a,s;
	while(cin>>n){
		s = 0;
		for(;n>0;n--){
			cin >> a;
			s += a;
		}
		cout << s << endl;
	}
	return 0;
}
