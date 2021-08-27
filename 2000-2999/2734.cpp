#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int res;
	char s[255];
	while(gets(s)){
		if(s[0] == '#')
			break;
		res = 0;
		int len = strlen(s);
		for(int i = 0;i<len;i++){
			if(s[i] == ' ')
				continue;
			res+=(i+1)*(s[i]-'A'+1);
		}
		cout << res << endl;
	}
	return 0;
}

