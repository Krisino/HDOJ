#include<iostream>
#include<string.h>
using namespace std;
int main(){
	double arr[51][6],flag,count;
	int m,n;
	while(cin >> m >> n){
		count = 0;
		memset(arr,0,sizeof(arr));
		for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			cin >> arr[i][j];
			arr[i][n]+=arr[i][j];
			arr[m][j]+=arr[i][j];
		}
	}
		for(int i = 0;i<m;i++){
			arr[i][n]/=n;
			printf("%.2lf",arr[i][n]);
			if(i != m-1) cout << " ";
			else cout << endl;
		}
	for(int i = 0;i<n;i++){
		arr[m][i]/=m;
		printf("%.2lf",arr[m][i]);
		if(i != n-1)
		cout << " ";
		else
		cout << endl;
	}
	for(int i = 0;i<m;i++){
		flag = 1;
		for(int j = 0;j<n;j++){
		if(arr[i][j]<arr[m][j])
			flag = 0;
		}
		if(flag == 1) count ++;
	}
	cout << count << endl << endl;
	}
	
	return 0;
}

