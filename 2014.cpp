#include<iostream>
using namespace std;
int main(){
	int n;
	double tmp,res,max_num,min_num;
	while(cin>>n){
		res = 0;
		for(int i = 0;i < n;i++){
			cin >> tmp;
			if(i == 0){
				max_num = tmp;
				min_num = tmp;
			}
			max_num = max_num>tmp?max_num:tmp;
			min_num = min_num<tmp?min_num:tmp;
			res+=tmp;
		}
		res = res-max_num-min_num;
		res/=n-2;
		printf("%.2lf\n",res);
	} 
	return 0;
}

