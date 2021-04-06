#ifndef SEARCH_H
#define SEARCH_H
#include <iostream>
#include <vector>
#include <string>
#define ASCII 127

using namespace std;

class Search
{
private:
    void initializeAlphabet(string word);
protected:
    vector<int> alphabet;
    string text;
    virtual vector<int> find(string word) = 0;
public:
    void setText(string txt);
    vector<int> search(string word);
    virtual ~Search(){};
};

#endif // SEARCH_H
