#ifndef GAME_H
#define GAME_H 
class Game{

public:
char board[9] = {'0','1','2','3','4','5','6','7','8'};
void start();
void display_board();
void change_board(char c1,char c2);
char game_finished();
bool player1 = true;
char p1 = 'X';
char p2 = 'Y';
};



#endif