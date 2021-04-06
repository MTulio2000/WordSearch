#include "include/text.h"

int main()
{
    Text *text = new Text("text.txt",BMHS,false);
    cout << text->search("lorem").size()<<endl;
    return 0;
}
