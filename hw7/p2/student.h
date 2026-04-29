#include<iostream>
#include<string>
using namespace std;

class Student{
public:
	string name;
	string stu_id;
	int score1;
	int score2;
	int score3;
	double average;

	Student(string n, string id, int s1, int s2, int s3);

	void calculate_average();
};
