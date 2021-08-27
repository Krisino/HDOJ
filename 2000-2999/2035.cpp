#include<iostream>
using namespace std;
int main(){
	int a,b,res;
	while(cin>>a>>b){
		if(a==0&&b==0)	break;
		res = 1;
		a = a%1000;//1000 can change to any number
		while(b>0){
			if(b%2==1){
				res = (res*a)%1000;
			}
			b/=2;
			a = (a*a)%1000;
		}
		cout << res << endl;
	} 
	return 0;
}

