#include "credits.h"
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

class CreditCalculator
{
public:
    Credit credit;
    Course *course = nullptr;
    unsigned course_counter = 0;

    void allocate_for_course(string line); // 為新的一個課程資料動態配置一個記憶體空間
    void show_score_info();                // 輸出表格，檢查讀入的資訊是否有錯
    void credit_classify();                // 將取得的學分填入正確的分類
    void free_space();
};
