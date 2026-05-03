#include "credits.h"
#include "course_category.h"

void Credit::show_table()
{
    unsigned total_credit = csie.required + csie.elective + ge.common + ge.physical_fitness +
                            ge.liberal.aesthetics_culture + ge.liberal.civics_society +
                            ge.liberal.science_technology + free_elective + national_defence_edu;

    cout << "==================================" << endl;
    cout << "資訊工程學系" << endl;
    cout << "\t系必修：" << csie.required << endl;
    cout << "\t系選修：" << csie.elective << endl;
    cout << "==================================" << endl;
    cout << "通識教育" << endl;
    cout << "\t共同教育：" << ge.common << endl;
    cout << "\t體適能：" << ge.physical_fitness << endl;
    cout << "\t博雅教育" << endl;
    cout << "\t\t> 美學與文化：" << ge.liberal.aesthetics_culture << endl;
    cout << "\t\t> 公民與社會：" << ge.liberal.civics_society << endl;
    cout << "\t\t> 自然與科技：" << ge.liberal.science_technology << endl;
    cout << "==================================" << endl;
    cout << "自由選修：" << free_elective << endl;
    cout << "國防教育：" << national_defence_edu << endl;
    cout << "==================================" << endl;
    cout << "總學分：" << total_credit << endl;
    cout << "==================================" << endl;
}

void Credit::classify_and_add_credits(Course c)
{
	// 請完成此函式
}
