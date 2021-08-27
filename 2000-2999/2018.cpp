#include<iostream>
using namespace std;
int main(){
	int n,res[55];
	while(cin>>n){
		if(n == 0)
		break;
		res[1] = 1;
		res[2] = 2;
		res[3] = 3;
		res[4] = 4;
		if(n>=5){
		for(int i = 5;i<=n;i++){
			res[i] = res[i-1] + res[i-3];
		}			
		}
		cout << res[n] << endl;
	} 
	return 0;
}

