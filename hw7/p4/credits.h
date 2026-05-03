#include "course.h"
#include <iostream>
#include <string>

class Credit
{
public:
    struct Csie
    {                          // 資訊工程學系
        unsigned required = 0; // 必修課學分
        unsigned elective = 0; // 選修課
    } csie;

    struct GE
    {                                  // general education 通識教育
        unsigned common = 0;           // 共同教育
        unsigned physical_fitness = 0; // 體適能

        struct Liberal
        {                                    // liberal education 博雅教育
            unsigned aesthetics_culture = 0; // 美學文化
            unsigned civics_society = 0;     // 公民與社會
            unsigned science_technology = 0; // 自然與科技
        } liberal;
    } ge;

    unsigned free_elective = 0;        // 自由選修
    unsigned national_defence_edu = 0; // 國防教育

    void classify_and_add_credits(Course c); // 將每個課程獲得的學分填入到正確的學分分類裡面
    void show_table();                       // 顯示學分分類後的表格
};