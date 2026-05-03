#include <cstring>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Course
{
public:
    string semester;     // 修課學期
    string subject_code; // 科目代號
    string subject_name; // 科目名稱
    unsigned credit;     // 該課程學分
    unsigned score;      // 取得分數

    void parse_str(string str);
};