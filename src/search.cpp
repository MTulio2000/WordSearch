#include "../include/search.h"

void Search::initializeAlphabet(string word)
{
    this->alphabet = vector<int>(ASCII,-1);
    for(int i = 0; i < (int)word.size();i++)
        this->alphabet[word[i]] = i;
}


void Search::setText(string txt)
{
    this->text = txt;
}

vector<int> Search::search(string word)
{
    initializeAlphabet(word);
    return find(word);
}
