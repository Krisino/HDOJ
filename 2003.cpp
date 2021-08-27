#include<iostream>
using namespace std;
int main(){
	double n;
	while(cin >> n){
		n = n>0?n:(-1)*n;
		printf("%.2lf\n",n);
	}
	return 0;
}

