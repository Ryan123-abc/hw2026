#include "course.h"

void Course::parse_str(string str)
{
    istringstream iss(str);
    string token;
    vector<string> tokens;

    // 使用 getline 分割字串，遇到空白或 tab 分隔
    while (getline(iss, token, '\t'))
    {
        if (!token.empty())
        {
            tokens.push_back(token);
        }
    }

    // 確保至少有基本欄位
    this->semester = tokens[0];

    // 將 subject_code 和 subject_name 分開處理
    istringstream subject_stream(tokens[1]);
    subject_stream >> this->subject_code;              // 提取 subject_code
    getline(subject_stream, this->subject_name);       // 剩下的作為 subject_name
    this->subject_name = this->subject_name.substr(1); // 去掉前導空格

    // 檢查是否有學分欄位
    if (tokens.size() > 2 && !tokens[2].empty())
    {
        try
        {
            this->credit = stoi(tokens[2]);
        }
        catch (...)
        {
            this->credit = 0; // 若轉換失敗，預設為 0
        }
    }
    else
    {
        this->credit = 0;
    }

    // 檢查是否有分數或 "抵修"/"抵免" 欄位
    if (tokens.size() > 3 && !tokens[3].empty())
    {
        if ((tokens[3] == "抵修") || (tokens[3] == "抵免"))
        {
            this->score = 60; // 預設 60 分
        }
        else
        {
            try
            {
                this->score = stoi(tokens[3]);
            }
            catch (...)
            {
                this->score = 0; // 若轉換失敗，預設為 0
            }
        }
    }
    else
    {
        this->score = 0;
    }
}
