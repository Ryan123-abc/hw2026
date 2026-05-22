#include"tourist.h"

class VIPTourist : public Tourist{
private:
	string privileges[20];
	int quantity = 0;

public:
	void set_info(string first_name, string last_name);
    void add_special_privilege(string privilege);
    string *get_special_privilege();
    int get_special_privilege_quantity();
};
