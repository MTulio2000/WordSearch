#include "../include/boyermoorehorspool.h"

vector<int> BoyerMooreHorspool::find(string word)
{
    int index = 0,j;
    vector<int> positions;
    int n = this->text.size();
    int m = word.size();
    int add;
    while(index<=n-m)
    {
        j = m-1;
        while(text[index+j]==word[j])
            j--;
        if(j<0)
            positions.push_back(index);
        add = m-1-alphabet[text[index+m-1]];
        index+=add?add:1;
    }
    return positions;
}
