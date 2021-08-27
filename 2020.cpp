#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void Swap(int &a,int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
int Partition(int *A,int p,int r){
	int x = A[r];
	int i = p-1;
	for(int j = p;j<r;j++){
		if(abs(A[j])>abs(x)){
			i++;
			Swap(A[i],A[j]);
		}
	}
	Swap(A[i+1],A[r]);
	return i+1;
}
void Quicksort(int *A,int p,int r){
	if(p<r){
		int q =Partition(A,p,r);
		Quicksort(A,p,q-1);
		Quicksort(A,q+1,r);
	}
} 
int main(){
	int n,arr[100];
	while(cin >> n){
		if(n == 0) break;
		memset(arr,0,sizeof(arr));
		for(int i = 0;i<n;i++){
			cin >> arr[i];
		}
		Quicksort(arr,0,n-1);
		for(int i = 0;i<n;i++){
			cout << arr[i];
			if(i != n-1){
				cout << " ";
			}
			else 
			cout << endl;
		}
	}
	return 0;
}

