#include <iostream>
#include "game.h"
#include <string>
#include <stdlib.h>

/*
void Game :: start(){
   // std::cout<< "hallo\n" ;
    std::string feld[3][3];
    
   for (size_t i = 0; i < 3; i++)
    {
        for(size_t j=0;j<3;j++){

            feld[i][j]="salih";
        }
       
    }
    */
    
    using namespace std; 

    void Game :: change_board(char p1, char p2){
        int n ;
        if(player1==true){
         cin >> n;
            if(n>=9 || n<0){
                cout << "its not a valid try";
            }
            else{
                board[n] = p1;
                player1==false;
            }
        }
        else{
             cin >> n;
            if(n>=9 || n<0){
                cout << "its not a valid try";
            }
            else{
                board[n] = p2;
                player1==true;
            }
        }
    }
  
    
   void Game::display_board()
{   
    
		for(int i=0;i<9;i++)
		{
			std::cout<< board[i] << "\t" ;
				if (i == 2 || i== 5 || i==8)
					std::cout<<"\n"; 
    }
}

char Game::game_finished(){    
    if ((board[0] == board[1]) && (board[1] == board[2]) && (board[0] != 0)) {
		return board[0];
	}
	if ((board[3] == board[4]) && (board[4] == board[5]) && (board[3] != 0)) {
		return board[3];
	}
	if ((board[6] == board[7]) && (board[7] == board[8]) && (board[6] != 0)) {
		return board[6];
	}
	if ((board[0] == board[3]) && (board[3] == board[6]) && (board[0] != 0)) {
		return board[0];
	}
	if ((board[1] == board[4]) && (board[4] == board[7]) && (board[1] != 0)) {
		return board[1];
	}
	if ((board[2] == board[5]) && (board[5] == board[8]) && (board[2] != 0)) {
		return board[2];
	}
	if ((board[0] == board[4]) && (board[4] == board[8]) && (board[0] != 0)) {
		return board[0];
	}
	if ((board[2] == board[4]) && (board[4] == board[6]) && (board[2] != 0)) {
		return board[2];
	}
	return 'Q';
}

void Game :: start(){
    int counter =0;
    char k = 'Q';
        while(k=='Q'){
            
        change_board(p1,p2);
        if(player1 ==true){
                player1=false;
            }
            else{
                player1=true;
            }
            if(counter>=9){
                k='Z';
                break;
            }
            display_board();
            k = game_finished();
            counter ++;
        }

        if(k=='X'){ 
            cout<<"Player1 has  won !\n"; 
        }
        else if (k=='Y'){
            cout<< "Player2 has  won !\n";
        }
        else{
            cout<<"unentschieden!\n";
        }

  }
    


int main(){
    Game game;
    game.display_board();
    game.start();
 
    return 0 ;
}