#include "term_score.h"
#define SIZE 1024
int main()
{
    char str[SIZE];
    char *ptr = str; // pointer
    int length = 0;
    cout << "Please input a score information: ";
    get_string(ptr, SIZE);
    data_processing(ptr);
}
