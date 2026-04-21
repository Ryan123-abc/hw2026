#include"term_score.h"

void get_string(char *ptr, int size){
	cin.getline(ptr, size);
}

void data_processing(char *ptr){
	char *id = strtok(ptr, ":");
	char *name = strtok(NULL, ":");
	char *midtest_str = strtok(NULL, ":");
	char *finaltest_str = strtok(NULL, ":");
	char *daily_str = strtok(NULL, ":");

	double midtest = atof(midtest_str);
	double finaltest = atof(finaltest_str);
	double daily = atof(daily_str);

	double total = midtest*0.35 + finaltest*0.35 + daily*0.3;

	cout << name << "(" << id << "): " << fixed << setprecision(1) << total << endl;
}
