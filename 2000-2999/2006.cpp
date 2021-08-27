#include<iostream>
using namespace std;
int main(){
	int n,tmp,res;
	while(cin>>n){
		res = 1;
		while(n--){
			cin >> tmp;
			if(tmp%2 == 1)
				res*=tmp;
		}
		cout << res << endl;
	}
	return 0;
}

