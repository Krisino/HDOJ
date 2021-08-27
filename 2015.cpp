#include<iostream>
using namespace std;
int main(){
	int i,j,n,m,arr[100];
	while(cin>>n>>m){
		for(i = 0;i+m<n;i+=m){
			cout << (4+(i+i+m-1)*2)/2 << " ";
		}
		cout << (4+2*(i+n-1))/2 << endl;
	}
	return 0;
}

