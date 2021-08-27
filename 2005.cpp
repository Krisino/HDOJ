#include<iostream>
using namespace std;
bool judge(int year){
	if(year%4==0&&year%100!=0||year%400==0)
	return true;
	else
	return false;
}
int main(){
	int year,month,day,res;
	int mon[12]={0,31,28,31,30,31,30,31,30,31,30,31};
	while(cin>>year&&cin.get()&&cin>>month&&cin.get()&&cin>>day){
		res = 0;
		for(int i = 0;i<month;i++){
			res+=mon[i];
		}
		res+=day;
		if(judge(year)&&month>2){
			res+=1;
		}
		cout << res << endl;
	}
	return 0;
}

