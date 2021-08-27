#include<iostream>
using namespace std;
int main(){
	int n,tmp,i;
	double flag,res;
	cin>>n;
	while(n--){
		res = 0;
		flag = 1;
		i = 1;
		cin >> tmp;
		while(tmp--){
			res+=flag/i;
			i++;
			flag*=-1;
		}
		printf("%.2lf\n",res);
	} 
	return 0;
}

