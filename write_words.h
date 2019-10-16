#ifndef WRITE_WORDS_H_INCLUDED
#define WRITE_WORDS_H_INCLUDED

int write()
{
    ofstream fp("words.txt",ios::app|ios::binary);
    if(!fp)
    {
        cout<<"Cannot open the file";
        return 0;
    }
    char word[30];
    cout<<"Enter the word"<<endl;
    cin.get(word,30,'\n');
    cout<<word;//you need to delete this
    fp<<word;
    fp<<endl;
    fp.close();
    return 1;
}

#endif // WRITE_WORDS_H_INCLUDED
