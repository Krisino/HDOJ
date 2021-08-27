#include<iostream>
using namespace std;
int main(){
	int n,m,tmp,flag;
	while(cin>>n>>m){
		if(n==0&&m==0) break;
		flag = 0;
		for(int i = 0;i<n;i++){
			cin>>tmp;
			if(m<tmp&&flag == 0){
				cout << m << " ";
				flag = 1;
				cout << tmp;
				if(i != n-1)
				cout << " ";
			}
			else if(m>tmp && i == n-1){
				cout << tmp << " ";
				cout << m;
			}
			else{
			cout << tmp;
			if(i != n-1)
			cout << " ";			
			}

		}
		cout << endl;
	} 
	return 0;
}

