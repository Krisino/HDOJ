#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	int m,n,max_m = 0,max_n = 0,arr[100][100];
	while(cin >> m >> n){
	memset(arr,0,sizeof(arr));
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			cin >> arr[i][j];
			if(abs(arr[i][j])>abs(arr[max_m][max_n])){
				max_m = i;
				max_n = j;
			}
		}
	}
	cout << max_m+1 << " " << max_n+1 << " " << arr[max_m][max_n] << endl;	
	}
	return 0;
}

