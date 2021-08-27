#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,len;
	char s[100];
	cin >> n;
	while(n--){
		memset(s,'\0',sizeof(s));
		cin >> s;
		len = strlen(s);
		int num[5] = {0};
		for(int i = 0;i<len;i++){
			if(s[i]=='a') num[0]++;
			else if(s[i]=='e') num[1]++;
			else if(s[i]=='i') num[2]++;
			else if(s[i]=='o') num[3]++; 
			else if(s[i]=='u') num[4]++;
		}
		cout << "a:" << num[0] << endl << "e:" << num[1] << endl << "i:" << num[2]
		<< endl << "o:" << num[3] << endl << "u:" << num[4] << endl;
		if(n != 0) cout << endl;
	}
	return 0;
}

