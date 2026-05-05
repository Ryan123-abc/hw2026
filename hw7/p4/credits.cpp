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

void Credit::classify_and_add_credits(Course c){
	// 1. 檢查分數是否及格
    if (c.score < 60) {
        return;
    }

    // 2. 依序檢查課程代號屬於哪個陣列
    // 系必修
    for (int i = 0; i < CSIE_REQUIRED_MAX; ++i) {
        if (c.subject_code == csie_required[i]) {
            this->csie.required += c.credit;
            return;
        }
    }

    // 系選修
    for (int i = 0; i < CSIE_ELECTIVE_MAX; ++i) {
        if (c.subject_code == csie_elective[i]) {
            this->csie.elective += c.credit;
            return;
        }
    }

    // 通識-共同教育
    for (int i = 0; i < GE_COMMON_MAX; ++i) {
        if (c.subject_code == ge_common[i]) {
            this->ge.common += c.credit;
            return;
        }
    }

    // 通識-體適能
    for (int i = 0; i < GE_PHYSICAL_FITNESS_MAX; ++i) {
        if (c.subject_code == ge_physical_fitness[i]) {
            this->ge.physical_fitness += c.credit;
            return;
        }
    }

    // 博雅教育-公民與社會
    for (int i = 0; i < LIBERAL_CIVICS_SOCIETY_MAX; ++i) {
        if (c.subject_code == liberal_civics_society[i]) {
            this->ge.liberal.civics_society += c.credit;
            return;
        }
    }

    // 博雅教育-美學與文化
    for (int i = 0; i < LIBERAL_AESTHETICS_CULTURE_MAX; ++i) {
        if (c.subject_code == liberal_aesthetics_culture[i]) {
            this->ge.liberal.aesthetics_culture += c.credit;
            return;
        }
    }

    // 博雅教育-自然與科技
    for (int i = 0; i < LIBERAL_SCIENCE_TECHNOLOGY_MAX; ++i) {
        if (c.subject_code == liberal_science_technology[i]) {
            this->ge.liberal.science_technology += c.credit;
            return;
        }
    }

    // 國防教育
    for (int i = 0; i < NATIONAL_DEFENCE_MAX; ++i) {
        if (c.subject_code == national_defence[i]) {
            this->national_defence_edu += c.credit;
            return;
        }
    }

    // 3. 若以上皆無匹配，則計入自由選修
    this->free_elective += c.credit;
}
