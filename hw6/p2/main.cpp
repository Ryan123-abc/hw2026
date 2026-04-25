#include "prime_number.h"
#include <iostream>
using namespace std;

int get_input_greater_than_0()
{
    int number;
    bool first_time = true;
    do
    {
        if (!first_time)
        {
            cout << "Your input must greater than 0!!! Please re-enter: ";
        }
        first_time = false;
        cin >> number;
    } while (number <= 0);
    return number;
}

int main()
{
    int prime_num_quantity;
    int *ptr;
    cout << "How many prime numbers do you want to display? ";
    prime_num_quantity = get_input_greater_than_0();

    allocate_for_prime_num(&ptr, prime_num_quantity);

    for (int i = 0; i < prime_num_quantity; i++)
    {
        if (i != prime_num_quantity - 1)
        {
            cout << ptr[i] << ", ";
        }
        else
        {
            cout << ptr[i] << endl;
        }
    }

    delete ptr;
    return 0;
}