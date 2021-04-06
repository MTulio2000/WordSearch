#include "../include/boyermoorehorspoolsunday.h"

vector<int> BoyerMooreHorspoolSunday::find(string word)
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
            positions.push_back(index);
        index+=m-alphabet[text[index+m]];
    }
    return positions;
}
