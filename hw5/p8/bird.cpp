#include"bird.h"

void replying(wstring database[][2], int size, wstring search_str){
	bool found = false;
	for(int i=0; i<size-1; i++){
		if(database[i][0].find(search_str) != wstring::npos){
			wcout << database[i][0] << L":" << database[i][1] << endl;
			found = true;
		}
	}

	if(!found){
		wcout << database[size-1][0] << L":" << database[size-1][1] << endl;
	}
}
