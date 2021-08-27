#include<iostream>
using namespace std;
int main(){
	int a,b,i;
	while(cin>>a>>b){
		if(a==0&&b==0)	break;
		for(i = a*100;i<a*100+100;i++){
			if(i%b==0) break;
		}
		i = i%100;
		for(;i<100;i+=b){
			if(i<10) cout<< '0';
			cout << i;
			if(i+b>=100) cout << endl;
			else cout << " ";
	}
	}
	return 0;
}

