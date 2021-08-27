#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		char s[100];
		cin >> s;
		int flag = 1,len = strlen(s);
		for(int i = 0,j=len-1;i<=len/2;i++,j--){
			if(s[i]!=s[j])
			flag = 0;
		}
		if(flag == 1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}

