#include <iostream>
#include<stdlib.h>
#include<random>
#include<time.h>
#include<fstream>
#include "play.h"
#include "check.h"
#include "write_words.h"


using namespace std;
#define n 3;

int main()
{
    char ch;
    int value;
    cout<<"Welcome To Hangman Game"<<endl;
    cout<<"To play game"<<endl;
    cout<<"Press P\n";
    cout<<"To Quit"<<endl;
    cout<<"Press Q\n";
    do{
        cin>>ch;
        cout<<"in main and in while loop"<<endl;
        ch=toupper(ch);
        switch(ch)
        {
            case 'P':value=play();
            switch(value)
            {
                case 0:cout<<"Some error occured";
                        exit(0);
                        break;
                case 1:cout<<"Hey! You win the game";
                        break;
                case 2:cout<<"You lose! It's Ok try again";
                        break;
            }
            break;
            case 'Q':cout<<"Bye !!!";
            break;
            case 'W':value=write();
                    if(value==0)
                    {
                        cout<<"Cannot open the File";
                    }
            break;
            default: cout<<"You entered wrong choice";
        }
    }while(ch!='Q');
    return 1;
}
