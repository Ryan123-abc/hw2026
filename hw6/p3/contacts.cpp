#include"contacts.h"

void add_a_contact(Contacts **data, int *data_count){
	Contacts *new_data = new Contacts[*data_count+1];

	for(int i=0; i < *data_count; i++){
		new_data[i] = (*data)[i];
	}

	cout << "Enter name: ";
	cin >> new_data[*data_count].name;

	cout << "Enter birthday(year month day): ";
    cin >> new_data[*data_count].birthday.year >> new_data[*data_count].birthday.month >> new_data[*data_count].birthday.day;

	cout << "Enter phone number: ";
    cin >> new_data[*data_count].phone_number;

	cout << "Enter email: ";
    cin >> new_data[*data_count].email;

	delete[] *data;
	*data = new_data;

	(*data_count)++;

	cout << "Contact added successfully!" << endl;
}
 
void delete_a_contact(Contacts **data, int *data_count){
	if(*data_count == 0){
		cout << "Nothing to delete!" << endl;
		return;
	}

	cout << "Enter the name of the contact to delete: ";
	string target;
	cin >> target;

	int index = -1;
	for(int i=0; i < *data_count; i++){
		if((*data)[i].name == target){
			index = i;
			break;
		}
	}

	if(index == -1){
		cout << "Contact not found!" << endl;
        return;
    }
	
	Contacts *new_data = new Contacts[*data_count-1];

	for(int i=0, j=0; i < *data_count; i++){
		if(i != index){
			new_data[j++] = (*data)[i];
		}
	}

	delete[] *data;
	*data = new_data;
	(*data_count)--;

	cout << "Contact deleted successfully!" << endl;
}

void sort_by_name(Contacts **data, int *data_count){
	if(*data_count == 0){
		cout << "Nothing to sort!" << endl;
		return;
	}

	for(int i=0; i < *data_count-1; i++){
		for(int j=0; j < *data_count-i-1; j++){
			if((*data)[j].name > (*data)[j+1].name){
				swap((*data)[j], (*data)[j+1]);
			}
		}
	}
	cout << "Contacts sorted by name!" << endl;
}

void find_a_contact(Contacts **data, int *data_count){
	if(*data_count == 0){
		cout << "Nothing to find!" << endl;
        return;
    }

	cout << "Enter the name of the contact to find: ";
    string target;
    cin >> target;

	for(int i=0; i < *data_count; i++){
		if((*data)[i].name == target){
			cout << "Name: " << (*data)[i].name << endl;
            cout << "Birthday: " << (*data)[i].birthday.year << "-" << (*data)[i].birthday.month << "-" << (*data)[i].birthday.day << endl;
            cout << "Phone Number: " << (*data)[i].phone_number << endl;
            cout << "Email: " << (*data)[i].email << endl;
            return;
        }
    }
	cout << "Contact not found!" << endl;
}

void list_data(Contacts **data, int *data_count){
	if(*data_count == 0){
		cout << "No contacts available." << endl;
		return;
	}
	
	cout << "  Name     Birthday     Phone Number     Email" << endl;

	for (int i = 0; i < *data_count; i++)
    {
        cout << "[" << (*data)[i].name << "]" << "[" << (*data)[i].birthday.year << "-" << (*data)[i].birthday.month << "-" << (*data)[i].birthday.day << "]" << "[" << (*data)[i].phone_number << "]" << "[" << (*data)[i].email << "]" << endl;
    }
}
