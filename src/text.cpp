#include "../include/text.h"

Text::Text()
{
    emplaceMethods();
}

Text::Text(string path,TypeSearch type,bool sensitive)
{
    this->openText(path);
    this->setTypeSearch(type);
    this->setCaseSensitive(sensitive);
    emplaceMethods();
}

void Text::emplaceMethods()
{
    methods.emplace(BM,new BoyerMoore());
    methods.emplace(BMH,new BoyerMooreHorspool());
    methods.emplace(BMHS,new BoyerMooreHorspoolSunday());
}

void Text::setCaseSensitive(bool value)
{
    caseSensitive = value;
}

void Text::transformString(string &str)
{
    if(!caseSensitive)
        transform(str.begin(), str.end(), str.begin(),
            [](unsigned char c){ return tolower(c); });
}

void Text::openText(string path)
{
    ifstream t(path);
    text = string((istreambuf_iterator<char>(t)),istreambuf_iterator<char>());
}

void Text::setTypeSearch(TypeSearch type)
{
    this->type = type;
}

vector<int> Text::search(string word)
{
    string text = this->text;
    transformString(word);
    transformString(text);
    SearchMethods::iterator it;
    for(it = methods.begin();it!=methods.end();it++)
        it->second->setText(text);
    return methods[type]->search(word);
}

Text::~Text()
{
    Search *s;
    while(methods.size())
    {
        s = methods.begin()->second;
        delete s;
        methods.erase(methods.begin());
    }
}
