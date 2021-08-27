#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double x1,y1,x2,y2,dis;
	while(cin>>x1>>y1>>x2>>y2){
		dis = pow((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2),0.5);
		printf("%.2lf\n",dis);
	}
	return 0;
}
