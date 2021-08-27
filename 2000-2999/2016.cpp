#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,min_pos,arr[100];
	while(cin>>n){
		memset(&arr,0,sizeof(arr));
		if(n == 0) break;
		min_pos = 0;
		for(int i = 0;i<n;i++){
			cin >> arr[i];
			if(arr[i]<arr[min_pos])
			min_pos = i;
		}
		swap(arr[0],arr[min_pos]);
		for(int i = 0;i<n;i++){
			cout << arr[i];
			if(i != n-1)
				cout << " ";
			else
				cout << endl;
		}
	}
	return 0;
}

