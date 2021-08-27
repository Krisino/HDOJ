#include<iostream>
using namespace std;
int main(){
	double tmp,avg = 0;
	for(int i =0;i<12;i++){
		cin>> tmp;
		avg+=tmp;
	} 
	avg = (avg/12)*100/100;
	cout << "$" << avg << endl;
	return 0;
}

