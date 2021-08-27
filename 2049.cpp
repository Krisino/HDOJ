#include<iostream>
using namespace std;
int ck(int n){
	int res = 1;
	for(int i = 1;i<=n;i++){
		res*=i;
	}
	return res;
}
int main(){
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		cout << ck(a)/(ck(b)*ck(a-b))*(b-1);
	}
	return 0;
}

