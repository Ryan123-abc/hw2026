#include<iostream>
using namespace std;

class Student{
public:
	string name;
	string stu_id;
	int score1;
	int score2;
	int score3;
	int average;

	Student(string n, string id, int s1, int s2, int s3){
		name = n;
		stu_id = id;
		score1 = s1;
		score2 = s2;
		score3 = s3;
		average = 0;
	}

	void calculate_average(){
		average = (score1 + score2 + score3)/3;
	}
};
