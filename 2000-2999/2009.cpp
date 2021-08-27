#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double n,m,res;
	while(cin>>n>>m){
		res = 0;
		while(m--){
			res += n;
			n = pow(n,0.5);
		}
		printf("%.2lf\n",res);
	}
	return 0;
}

