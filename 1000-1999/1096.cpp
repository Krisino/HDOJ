#include<iostream>
using namespace std;
int main(){
	int n,m,a,s;
	cin >> n;
	for(;n;n--){
		cin >> m;
		s = 0;
		for(;m;m--){
			cin >> a;
			s+=a;
		}
		cout << s << endl;
		if(n == 1)
		break;
		cout << endl;
	}
	return 0;
}
