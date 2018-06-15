#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class tic_tac_toe
{
private:
    bool game=true;
    char ch;
    char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
public:
    void table()
    {
        cout<<"\n\n\t\t'X' for player 1 and 'O' for player 2";
        cout<<"\n\n\t\t\t";
        cout<<"  "<<arr[0][0]<<" | "<<arr[0][1]<<" | "<<arr[0][2]<<"  "<<endl;
        cout<<"\t\t\t-------------"<<endl;
        cout<<"\t\t\t";
        cout<<"  "<<arr[1][0]<<" | "<<arr[1][1]<<" | "<<arr[1][2]<<"  "<<endl;
        cout<<"\t\t\t-------------"<<endl;
        cout<<"\t\t\t";
        cout<<"  "<<arr[2][0]<<" | "<<arr[2][1]<<" | "<<arr[2][2]<<"  "<<endl;
    }
    void player1()
    {
        bool get=true;
        cout<<"\n\nPlayer 1(Enter box number): ";
        while(get)
        {
            ch=getch();
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    if(ch==arr[i][j])
                    {
                        arr[i][j]='X';
                        get=false;
                        break;
                    }
                }
            }
        }
    }
    void player2()
    {
        bool get=true;
        cout<<"\n\nPlayer 2(Enter box number): ";
        while(get)
        {
            ch=getch();
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    if(ch==arr[i][j])
                    {
                        arr[i][j]='O';
                        get=false;
                        break;
                    }
                }
            }
        }
    }
    void p1_win()
    {
        if(arr[0][0]=='X' && arr[0][0]==arr[0][1] && arr[0][0]==arr[0][2])
            game=false;
        else if(arr[1][0]=='X' && arr[1][0]==arr[1][1] && arr[1][0]==arr[1][2])
            game=false;
        else if(arr[2][0]=='X' && arr[2][0]==arr[2][1] && arr[2][0]==arr[2][2])
            game=false;
        else if(arr[0][0]=='X' && arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2])
            game=false;
        else if(arr[0][2]=='X' && arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0])
            game=false;
        else if(arr[0][0]=='X' && arr[0][0]==arr[1][0] && arr[0][0]==arr[2][0])
            game=false;
        else if(arr[0][1]=='X' && arr[0][1]==arr[1][1] && arr[0][1]==arr[2][1])
            game=false;
        else if(arr[0][2]=='X' && arr[0][2]==arr[1][2] && arr[0][2]==arr[2][2])
            game=false;
    }
    void p2_win()
    {
        if(arr[0][0]=='O' && arr[0][0]==arr[0][1] && arr[0][0]==arr[0][2])
            game=false;
        else if(arr[1][0]=='O' && arr[1][0]==arr[1][1] && arr[1][0]==arr[1][2])
            game=false;
        else if(arr[2][0]=='O' && arr[2][0]==arr[2][1] && arr[2][0]==arr[2][2])
            game=false;
        else if(arr[0][0]=='O' && arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2])
            game=false;
        else if(arr[0][2]=='O' && arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0])
            game=false;
        else if(arr[0][0]=='O' && arr[0][0]==arr[1][0] && arr[0][0]==arr[2][0])
            game=false;
        else if(arr[0][1]=='O' && arr[0][1]==arr[1][1] && arr[0][1]==arr[2][1])
            game=false;
        else if(arr[0][2]=='O' && arr[0][2]==arr[1][2] && arr[0][2]==arr[2][2])
            game=false;
    }
    void Game()
    {
        int counter=1;
        table();
        while(game)
        {
            player1();
            p1_win();
            system("cls");
            table();
            if(game==false)
            {
                cout<<"\n\n\n\t\t\tPlayer 1 win "<<endl;
                break;
            }
            if(counter==5)
            {
                cout<<"\n\n\t\t\tTry Again"<<endl;
                break;
            }
            counter++;
            player2();
            p2_win();
            system("cls");
            table();
            if(game==false)
            {
                cout<<"\n\n\n\t\t\tPlayer 2 win"<<endl;
                break;
            }
        }
    }
};
int main()
{
    tic_tac_toe T;
    char choice;
    T.Game();
    do
    {
        cout<<"Do you want to play Again: ";
        cin>>choice;
        if(choice=='y' || choice=='Y')
        {
            tic_tac_toe T1;
            system("cls");
            T1.Game();
        }
        else
            break;
    }
    while(choice=='Y' || choice=='y');
    getch();
    return 0;
}
