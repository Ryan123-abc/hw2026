#include "kanban.h"

int main()
{
    Employee Amy, Bob, Tony;
    Task task[5];

    task[0].set_name("View website request log");
    task[1].set_name("Edit new version cybersecurity playbook");
    task[2].set_name("Edit API documents");
    task[3].set_name("Data cleaning for database");
    task[4].set_name("Monitoring request data: application traffic");

    Bob.set_name("Bob");
    Amy.set_name("Amy");
    Tony.set_name("Tony");

    Bob.assigned_task = task[0];
    cout << Bob;
    Bob.assigned_task += task[1];
    cout << Bob;
    Bob.assigned_task += task[2];
    cout << Bob;
    Bob.assigned_task = task[2];
    cout << Bob;
    Bob.assigned_task += task[3];
    cout << Bob;

    cout << "--------------" << endl;

    Amy.assigned_task = task[3];
    cout << Amy;
    Amy.assigned_task += task[4];
    cout << Amy;

    cout << "--------------" << endl;

    Tony.assigned_task = Bob.assigned_task + Amy.assigned_task;
    cout << Tony;
    Tony.assigned_task -= task[0]; // invalid operation: do nothing
    cout << Tony;
    Tony.assigned_task -= task[4];
    cout << Tony;

    return 0;
}