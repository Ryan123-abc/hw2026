#include <iostream>
#include <string>
using namespace std;

class Task
{
protected:
    string name;

public:
    void set_name(string n);
    string get_name();
};

class AssignTaskTable
{
protected:
    Task task[5];
    int task_count = 0;

public:
    void operator=(const AssignTaskTable &task_table); // overwrite all tasks with task_table
    void operator=(Task &t);                           // overwrite all tasks with t
    void operator+=(Task &t);                          // add a new task
    void operator-=(Task &t);                          // remove a task (task name shoule be checked)
    AssignTaskTable operator+(AssignTaskTable &others_task_table);

    int get_task_count();
    Task *get_task_at(int index);
};

class Employee
{
public:
    string name;
    AssignTaskTable assigned_task;
    void set_name(string n);
    string get_name();
};

ostream &operator<<(ostream &out_string, Employee &e);