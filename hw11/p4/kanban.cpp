#include "kanban.h"

void Task::set_name(string n) {
    name = n;
}

string Task::get_name() {
    return name;
}

void AssignTaskTable::operator=(const AssignTaskTable &task_table) {
    task_count = task_table.task_count;
    for (int i = 0; i < task_count; i++) {
        task[i] = task_table.task[i];
    }
}

void AssignTaskTable::operator=(Task &t) {
    task[0] = t;
    task_count = 1;
}

void AssignTaskTable::operator+=(Task &t) {
    if (task_count < 5) {
        task[task_count] = t;
        task_count++;
    }
}

void AssignTaskTable::operator-=(Task &t) {
    int target_index = -1;
    for (int i = 0; i < task_count; i++) {
        if (task[i].get_name() == t.get_name()) {
            target_index = i;
            break;
        }
    }

    if (target_index != -1) {
        for (int i = target_index; i < task_count - 1; i++) {
            task[i] = task[i + 1];
        }
        task_count--;
    }
}

AssignTaskTable AssignTaskTable::operator+(AssignTaskTable &others_task_table) {
    AssignTaskTable result;

    for (int i = 0; i < this->task_count; i++) {
        result.task[result.task_count] = this->task[i];
        result.task_count++;
    }

    for (int i = 0; i < others_task_table.get_task_count(); i++) {
        Task* other_task = others_task_table.get_task_at(i);
        bool is_duplicate = false;
        
        for (int j = 0; j < result.task_count; j++) {
            if (result.task[j].get_name() == other_task->get_name()) {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate && result.task_count < 5) {
            result.task[result.task_count] = *other_task;
            result.task_count++;
        }
    }

    return result;
}

int AssignTaskTable::get_task_count() {
    return task_count;
}

Task* AssignTaskTable::get_task_at(int index) {
    if (index >= 0 && index < task_count) {
        return &task[index];
    }
    return nullptr;
}

void Employee::set_name(string n) {
    name = n;
}

string Employee::get_name() {
    return name;
}

ostream &operator<<(ostream &out_string, Employee &e) {
    out_string << e.get_name() << " is currently assigned to [";
    
    int count = e.assigned_task.get_task_count();
    for (int i = 0; i < count; i++) {
        out_string << e.assigned_task.get_task_at(i)->get_name();
        if (i != count - 1) {
            out_string << ", ";
        }
    }
    
    out_string << "]" << endl;
    return out_string;
}
