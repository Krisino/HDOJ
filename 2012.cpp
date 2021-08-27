#include<iostream>
using namespace std;
bool judge(int n){
	if(n<2) return false;
	for(int i = 2;i<n/2;i++){
		if(n%i == 0)
			return false;
	}
	return true;
}
int main(){
	int a,b,flag;
	while(cin>>a>>b){
		if(a == 0 && b ==0)
			break;
		flag = 1;
		for(int i = a;i <= b;i++){
			flag = judge(i*i+i+41)&flag;
			if(!flag)
				break;
		}
		if(flag)
			cout << "OK" << endl;
		else
			cout<< "Sorry" << endl;
	}
	return 0;
}

