#include <iostream>
#include<fstream>
using namespace std;
int write()
{
    cin.ignore();
    ofstream fp("words.txt",ios::app|ios::binary|ios::out);
    if(!fp)
    {
        cout<<"Cannot open the file";
        return 0;
    }
    char write_word[30];
    cout<<"Enter the word: ";
    cin.getline(write_word,30,'\n');
    fp<<write_word;
    fp<<endl;
    fp.close();
    return 1;
}
