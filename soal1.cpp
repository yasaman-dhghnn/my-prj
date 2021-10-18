#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string str;
	int a=0,b=0;
	cout << "lotfan 1 adad vared konid: ";
	getline(cin,str);
	b+=stoi(str);
	str="y";
	while (b!=0){
		if(str=="y"){
			
			cout << "lotfan adad jadid ra vared konid: ";
			getline(cin,str);
			b+=stoi(str);		
		}
		else if(str=="exit"){
			break;
		}
		else{
			cout << "vorodi sahih nemibashad. \n lotfan mojadad vared konid \n";
		}
		cout << "edame midahid? (y / exit) : ";	
		getline(cin,str);
	}
	
    cout << "majmo adadha = " << b<< endl;
  
  return 0;
}