#include "calculator.h"
using namespace std;

int main()
{
    CreditCalculator calculator;
    string line;
    while (getline(cin, line))
    {
        calculator.allocate_for_course(line); // 為每一個課程配置一個空間
    }
    calculator.show_score_info();
    calculator.credit_classify();
    calculator.free_space();
    calculator.credit.show_table();
    return 0;
}