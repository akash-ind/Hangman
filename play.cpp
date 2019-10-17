#include "check.h"
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;
int play()
{
    int rand_max=5;
    ifstream fp("words.txt",ios::binary|ios::in);
    char word[20];
    srand(time(NULL));
    int w_word=rand()%rand_max;
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
        }while(ch!='\n');
    }
    fp.get(word,30);
    int i=0;
    while(word[i])
    {
        word[i]=toupper(word[i]);
        if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'||word[i]==' ')
            cout<<word[i]<<" ";
        else
            cout<<"_"<<" ";
        i++;
    }
    cout<<endl;
    fp.close();
    int return_value=check(word);
    return return_value;

}
