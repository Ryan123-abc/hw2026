#include "str_addr.h"
#define SIZE 1024
int main()
{
    char str[SIZE];
    char *ptr = str; // pointer
    int length = 0;
    cout << "Please input a string: ";
    get_string(ptr, SIZE);

    for (int i = 0; str[i] != '\0'; i++)
    {
        print_substr_addr(ptr+i);
    }
    return 0;
}
