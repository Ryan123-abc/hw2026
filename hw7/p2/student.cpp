#include"student.h"

Student::Student(string n, string id , int s1, int s2, int s3){
	name = n;
	stu_id = id;
	score1 = s1;
	score2 = s2;
	score3 = s3;
	average = 0;
}

void Student::calculate_average(){
	average = (double)((score1 + score2 + score3)/3);
}
