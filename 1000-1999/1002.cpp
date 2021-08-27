#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *add,int len){
	for(int i = 0;i<len/2;i++){
		swap(add[i],add[len-1-i]);
	}
}
int main(){
	int n,i,j,len1,len2,max_len,carry;
	char add1[1000],add2[1000],res[1000];
	cin >> n;
	for(j = 1;j<=n;j++){
		carry = 0;
		cin >> add1 >> add2;
		len1 = strlen(add1);
		len2 = strlen(add2);
		max_len = (len1>len2?len1:len2)+1;
		reverse(add1,len1);
		reverse(add2,len2);
		for(i = 0;i<max_len;i++){
			int temp = carry;
			if(i<len1)
				temp += add1[i] - '0';
			if(i<len2)
				temp += add2[i] - '0';
			if(i == max_len-1 && temp == 0)
				break;
			res[i] = temp % 10 + '0';
			carry = temp/10;
		}
		max_len = i;
		reverse(add1,len1);
		reverse(add2,len2);
		cout << "Case " << j << ":" << endl;
		cout << add1 << " + " << add2 << " = ";
		for(i = max_len-1;i>=0;i--){
			cout << res[i];
		}
		cout << endl;
		if(j!=n)
		cout << endl;
	}
	return 0;
}
