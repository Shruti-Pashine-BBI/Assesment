#include <iostream>
#include <string>
using namespace std;
int main() {
    string input_string="EJLGNAGS9GL187RLW8RD0460CUZD8103";
    //2TZ1C1N1NJSNAOETOP7T8N4FZEULH3DJKZH7PDLP3C54JJKDOTUIPEGO8097
    //EJLGNAGS9GL187RLW8RD0460CUZD8103
    // cout<<"Enter the String:";
    // cin>>input_string;
    string last_4_chars = input_string.substr(input_string.length() - 4);
    string remaining_chars = input_string.substr(0, input_string.length() - 4);
    
    
string a;
int index=0;
   
    index=last_4_chars[0]-'0';
    for (int i = 0; i <= 3; i++) {
	  string b = remaining_chars.substr(index,4);
	  
	  
	  
	  index+=4;
	  
	  int number=last_4_chars[i+1]-'0';
	  index+=number;
	  a=b+a;
	}
cout<<a<<endl;

    return 0;
    
    
}

