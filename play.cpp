int play()
{
    ifstream fp("words.txt",ios::binary|ios::in);
    char ch;
    if(!fp)
    {
        cout<<"File cannot be opened ";
        return 0;
    }
    while(ch!='\n')
    {

        fp.get(ch);

    }
}
