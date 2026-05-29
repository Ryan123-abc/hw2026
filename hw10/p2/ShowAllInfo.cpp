#include "ShowAllInfo.h"

void show_all_info(Student *students[], int amt)
{
    for (int i = 0; i < amt; i++)
    {
        if (students[i] != nullptr)
        {
            students[i]->showInfo();
        }
    }
}
