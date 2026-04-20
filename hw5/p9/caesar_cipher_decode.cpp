#include"caesar_cipher_decode.h"
#include<string>
using namespace std;

void caesar_decode(string &str){
	for(int i=1; i<26; i++){                    //位移
		for(int j=0; j<str.length(); j++){      //字串
			char c = str[j];

			if(c >= 'a' && c <= 'z'){
				if(c=='z'){
					str[j]='a';
				}else{
					str[j]=c+1;
				}
			}else if(c >= 'A' && c <= 'Z'){
				if(c=='Z'){
					str[j]='A';
				}else{
					str[j]=c+1;
				}
			}
		}

		if(str.find("stopdecoding") != string::npos){
			break;
		}
	}
}
