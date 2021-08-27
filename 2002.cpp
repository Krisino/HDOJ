#include<iostream>
using namespace std;
#define PI 3.1415927
int main(){
	double r,v;
	while(cin >> r){
		v = 4*PI*r*r*r/3;
		printf("%.3lf\n",v);
	}
	return 0;
}

