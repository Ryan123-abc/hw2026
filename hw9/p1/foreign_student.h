#include"student.h"

class ForeignStudent : public Student{
private:
	string nationality;
	string passport_id;

public:
	void set_nationality(string nationality);
	void set_passport_id(string passport_id);

	string get_nationality();
	string get_passport_id();

	void calculate_term_score();
};
