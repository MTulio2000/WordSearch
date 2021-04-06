#include "../include/boyermoore.h"

vector<int> BoyerMoore::find(string word)
{
    int index = 0,j;
    vector<int> positions;
    int n = this->text.size();
    int m = word.size();
    while(index<=n-m)
    {
        j = m-1;
        while(text[index+j]==word[j])
            j--;
        if(j<0)
            positions.push_back(index++);
        else
            index+=(j<alphabet[text[index+j]])?1:j-alphabet[text[index+j]];
    }
    return positions;
}
