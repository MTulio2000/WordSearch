#ifndef BOYERMOORE_H
#define BOYERMOORE_H
#include "search.h"

class BoyerMoore:public Search
{
private:
    vector<int> find(string word) override;
};

#endif // BOYERMOORE_H
