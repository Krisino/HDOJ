#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string s,id,year,month,day,home;
		cin >> id;
        s=id.substr(0,2);            
        year=id.substr(6,4);
        month=id.substr(10,2);
        day=id.substr(12,2);
        if(s=="33")
            home="Zhejiang";
        else if(s=="11")
            home="Beijing";
        else if(s=="71")
            home="Taiwan";
        else if(s=="81")
            home="Hong Kong";
        else if(s=="82")
            home="Macao";
        else if(s=="54")
            home="Tibet";
        else if(s=="21")
            home="Liaoning";
        else if(s=="31")
            home="Shanghai";
        cout<<"He/She is from "<<home<<','<<"and his/her birthday is on "<<month<<','<<day<<','<<year<<' '<<"based on the table."<<endl;	
	} 
	return 0;
}

