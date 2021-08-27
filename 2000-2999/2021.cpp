#include<iostream>
using namespace std;
int main(){
	int n,m,count;
	int money[6]={100,50,10,5,2,1};
	while(cin>>n){
		if(n == 0) break;
		count = 0;
		for(int i = 0;i < n;i++){
			cin >> m;
			for(int j = 0;j<6;j++){
			count += m/money[j];
			m = m%money[j];		
			}
		}
		cout << count << endl;
	}
	return 0;
}

