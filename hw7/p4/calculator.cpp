#include "calculator.h"

void CreditCalculator::allocate_for_course(string line)
{
    Course *new_space = new Course[course_counter + 1];
    for (unsigned i = 0; i < course_counter; i++)
    {
        new_space[i] = course[i]; // 移動資料到新的空間
    }
    delete[] course;
    course = new_space;
    course[course_counter].parse_str(line); // 解析每一筆資訊
    course_counter++;
}

void CreditCalculator::show_score_info()
{
    cout << "[學期] [課程代號] [課程名稱]                 [學分數]  [成績]" << endl;
    for (int i = 0; i < course_counter; i++)
    {
        cout << left << setw(8)
             << course[i].semester << left << setw(10)
             << course[i].subject_code << left << setw(31)
             << course[i].subject_name << "\t"
             << course[i].credit << right << setw(10)
             << course[i].score << endl;
    }
}

void CreditCalculator::credit_classify()
{
    for (int i = 0; i < course_counter; i++)
    {
        credit.classify_and_add_credits(course[i]);
    }
}

void CreditCalculator::free_space()
{
    delete[] course;
    course = nullptr;
}
