#ifndef PLAY_H_INCLUDED
#define PLAY_H_INCLUDED
#include "check.h"
using namespace std;
int play()
{
    int rand_max=5;
    ifstream fp("words.txt",ios::binary|ios::in);
    char word[20];
    srand(time(NULL));
    int w_word=rand()%rand_max;
    cout<<"In play.h";
    if(!fp)
    {
        cout<<"File cannot be opened ";
        return 0;
    }
    for(int k=0;k<w_word;k++)//this loop is for making random picking of words
    {
        char ch;
        do
        {
            fp.get(ch);
            fp.seekg(1,ios::cur);
        }while(ch!='\n');
    }
    fp.get(word,30);
    int i=0;
    while(word[i])
    {
        word[i]=toupper(word[i]);
        if(word[i]=='A'||'E'||'I'||'O'||'U')
            cout<<word[i];
        else
            cout<<"_";
        i++;
    }
    fp.close();
    int return_value=check(word);
    return return_value;

}

#endif // PLAY_H_INCLUDED
