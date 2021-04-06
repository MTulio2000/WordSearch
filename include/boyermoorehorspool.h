#ifndef BOYERMOOREHORSPOOL_H
#define BOYERMOOREHORSPOOL_H
#include "search.h"

class BoyerMooreHorspool:public Search
{
private:
    vector<int> find(string word) override;
};

#endif // BOYERMOOREHORSPOOL_H
