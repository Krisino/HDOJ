#include<iostream>
using namespace std;
int main(){
	int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int m=n*(2*n-1)+1;
        cout << m << endl;
    }

	return 0;
}

