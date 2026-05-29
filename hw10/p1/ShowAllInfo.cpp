#include"ShowAllInfo.h"

void show_all_info(Student *students[], int size){
	for(int i=0; i<size; i++){
		if(students[i] == nullptr){
			continue;
		}
		switch(students[i]->type){
			case Normal:
				students[i]->showInfo();
				break;
			case Foreign:
				((ForeignStudent*)students[i])->showInfo();
				break;
			case Local:
				((LocalStudent*)students[i])->showInfo();
				break;
			case LocalParttime:
				((LocalParttimeStudent*)students[i])->showInfo();
				break;
		}
	}
}
