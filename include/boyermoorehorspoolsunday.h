#ifndef BOYERMOOREHORSPOOLSUNDAY_H
#define BOYERMOOREHORSPOOLSUNDAY_H
#include "search.h"

class BoyerMooreHorspoolSunday:public Search
{
private:
    vector<int> find(string word) override;
};

#endif // BOYERMOOREHORSPOOLSUNDAY_H
