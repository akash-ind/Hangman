#ifndef CHECK_H_INCLUDED
#define CHECK_H_INCLUDED
using namespace std;
int check(char *p_word)
{
    int n=3;
    cout<<"Now you have to guess the missing characters in this word"<<endl;
    int flag=1;
    char ch;
    int j=0;
    int i=0;
    int ref_arr[20];
    int ch_occur=0;
    while(flag!=0)//flag is never zero in this program else the return statement breaks the loop
    {
        cout<<"You have "<<n;
        cout<<"chances"<<endl;
        cout<<"Enter a character"<<endl;
        cin>>ch;
        ch=toupper(ch);
        i=0;//For traversing the word
        while(p_word[i])
        {
            if(p_word[i]=='A'||'E'||'I'||'O'||'U'||ch)
            {
                ref_arr[j]=i;//the reference array that will output on subsequent calls after guessing a letter
                cout<<p_word[ref_arr[j]];
                j++;
                if(p_word[i]==ch)
                {
                    ch_occur=1;
                }
            }
            else
                cout<<"_";

            if(j==i)
                return 1;
        }
        if(ch_occur==0)
        {
            n--;
            if(n==0)
                return 2;
        }
        else
            cout<<"Wrong choice";
    }
}

#endif // CHECK_H_INCLUDED
