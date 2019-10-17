#include <iostream>
#include<algorithm>
using namespace std;
int check(char p_word[])
{
    int n=3;
    cout<<"Now you have to guess the missing characters in this word"<<endl;
    int flag=1;
    char ch;
    int j=0;
    int i=0;
    int ref_arr[20];
    int ch_occur=0;
    while(p_word[i]!='\0')//I need to traverse it twice to make reference array concept workable
    {
        if(p_word[i]=='A'||p_word[i]=='E'||p_word[i]=='I'||p_word[i]=='O'||p_word[i]=='U'||p_word[i]==' ')
        {
            ref_arr[j]=i;//the reference array that will output on subsequent calls after guessing a letter
            j++;//but i need to sort this array if I include ch at a later stage
        }
        i++;
    }
    while(flag!=0)//flag is never zero in this program else the return statement breaks the loop
    {
        cout<<"You have "<<n;
        cout<<"chances"<<endl;
        cout<<"Enter a character"<<endl;
        cin>>ch;
        ch=toupper(ch);
        i=0;//For traversing the word
        ch_occur=0;//for tackling the wrong input
        while(p_word[i]!='\0')
        {
            if(p_word[i]==ch)
            {
                ref_arr[j]=i;
                j++;
                ch_occur=1;
            }
            i++;
        }
        //an excess of j goes after last match
        sort(ref_arr,ref_arr+j);
        int f=0;
        for(int k=0;k<i;k++)
        {
            if(k==ref_arr[f])
            {
                cout<<p_word[k]<<" ";
                f++;
            }
            else
            {
                cout<<"_ ";
            }
        }
        if(ch_occur==0)
        {
            cout<<endl;
            cout<<"Wrong choice"<<endl;
            n--;
            if(n==0)
                return 2;
        }
        if(j==i)
            return 1;
    }
}
