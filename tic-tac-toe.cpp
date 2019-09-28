/*#include <iostream>

using namespace std;

char square[9]={'1','2','3','4','5','6','7','8','9'};
char mark;
int choice;
void draw();
int checkwin();
int main()
{

int player = 2;
int i;
while(true)
        {
            draw();
            player=(player==1)? 2:1;
            mark=(player==1)? 'X':'O';
            cout<<"please enter your choice"<<endl;
            cin>>choice;
                if(choice==1 && square[0]=='1'){
                    square[0]=mark;
                }
                else if(choice==2 && square[1]=='2'){
                    square[1]=mark;
                }
                else if(choice==3 && square[2]=='3'){
                    square[2]=mark;
                }
                else if(choice==4 && square[3]=='4'){
                    square[3]=mark;
                }
                else if(choice==5 && square[4]=='5'){
                    square[4]=mark;
                }
                else if(choice==6 && square[5]=='6'){
                    square[5]=mark;
                }
                else if(choice==7 && square[6]=='7'){
                    square[6]=mark;
                }
                else if(choice==8 && square[7]=='8'){
                    square[7]=mark;
                }
                else if(choice==9 && square[8]=='9'){
                    square[8]=mark;
                }else{
                cout<<"invalid move"<<endl;
                player=(player==1)? 2:1;
                }

                i=checkwin();

                if(i==1){
                    draw();
                    cout<<"player "<<player<<" wins"<<endl;
                    break;
                }
                else if(i==0){
                     draw();
                    cout<<"game ended in a draw"<<endl;
                    break;
                }
        }



    return 0;
}
void draw()
{

    cout << "Player 1 'X'  -  Player 2 'O'" << endl << endl;


    cout << "     |     |     " << endl;
    cout << "  " << square[0] << "  |  " << square[1] << "  |  " << square[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << endl;

    cout << "     |     |     " << endl << endl;
}
int checkwin(){

    if(square[0]==square[1] && square[1]==square[2]){
        return 1;
    }
    else if(square[3]==square[4] && square[4]==square[5]){

        return 1;
    }
    else if(square[6]==square[7] && square[7]==square[8]){

        return 1;
    }
    else if(square[0]==square[3] && square[3]==square[6]){

        return 1;
    }
    else if(square[1]==square[4] && square[4]==square[7]){

        return 1;
    }
    else if(square[2]==square[5] && square[5]==square[8]){

        return 1;
    }
    else if(square[0]==square[4] && square[4]==square[8]){

        return 1;
    }
    else if(square[2]==square[4] && square[4]==square[6]){

        return 1;
    }
    else if(square[0]!='1'&&square[1]!='2'&&square[2]!='3'&&square[3]!='4'&& square[4]!='5'&&square[5]!='6'&&square[6]!='7'&& square[7]!='8'&&square[8]!='9')
        {
                return 0;
        }else{return -1;}




}
*/
#include<iostream>
#include<cmath>
using namespace std; 
int main(){

cout<<"please enter your x1 cordinate"<<endl;
int x1;
cin>>x1;
cout<<"please enter your x2 cordinate"<<endl;
int x2;
cin>>x2;
cout<<"please enter your y1 cordinate"<<endl;
int y1;
cin>>y1;
cout<<"please enter your y2 cordinate"<<endl;
int y2;
cin>>y2;

int ans;
ans=(x2-x1)^2+(y2-y1)^2;
int ans2;
ans2 = ans;
ans= sqrt(ans2);
cout<<ans<<endl;
return 0;

}