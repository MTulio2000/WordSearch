#ifndef TEXT_H
#define TEXT_H
#include "boyermoorehorspoolsunday.h"
#include "boyermoorehorspool.h"
#include "boyermoore.h"
#include <fstream>
#include <streambuf>
#include <map>
#include <algorithm>

enum TypeSearch
{
    BM,
    BMH,
    BMHS
};

typedef map<TypeSearch,Search*> SearchMethods;

class Text
{
private:
    TypeSearch type = BM;
    SearchMethods methods;
    bool caseSensitive = true;
    void transformString(string &str);
    string text;
    void emplaceMethods();
public:
    Text();
    Text(string path,TypeSearch type,bool sensitive = false);
    void openText(string path);
    void setTypeSearch(TypeSearch type);
    vector<int> search(string word);
    ~Text();
    void setCaseSensitive(bool value);
};

#endif // TEXT_H
