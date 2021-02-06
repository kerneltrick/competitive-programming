#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int who_won(char a, char b){
	if((a == 'S' && b == 'P') || (a == 'P' && b == 'R') || (a == 'R' && b == 'S'))
		return 0;//a won
	else if((b == 'S' && a == 'P') || (b == 'P' && a == 'R') || (b == 'R' && a == 'S'))
		return 1;//b won
	return -1;//Equivalent
}

int main(){
	int t = 0;
	cin >> t;
	while(t > 0){
		int r = 0;
		int c = 0;
		int n = 0;
		cin >> r >> c >> n;
		//INPUT Board
		char oldBoard [r][c];
		for(int i = 0; i < r; ++i ){
			string line;
			cin >> line;
			for(int j = 0; j < c; ++j){
				oldBoard[i][j] = line.at(j);
			}
		}
		//Play game
		while(n>0){//Turns of play
			char newBoard [r][c];
			for(int i = 0; i < r; ++i)
				for(int j = 0; j < c; ++j)
					newBoard[i][j] = oldBoard[i][j];

			int winner = 0;
			int loser = 0;
			for(int i = 0; i < r; ++i){
				for(int j = 0; j < c; ++j){
					if(j != 0){//First check left
						winner = who_won(oldBoard[i][j], oldBoard[i][j-1]);
						if(winner != -1){//not equal
							loser = 1-winner;
							newBoard[i][j-loser] = oldBoard[i][j-winner];
						}
					}
					if(i != 0){//Then check above
						winner = who_won(oldBoard[i][j], oldBoard[i-1][j]);
						if(winner != -1){//not equal
							loser = 1-winner;
							newBoard[i-loser][j] = oldBoard[i-winner][j];
						}
					}
				}
			}
			//now copy new board to old board
			for(int i = 0; i < r; ++i)
				for(int j = 0; j < c; ++j)
					oldBoard[i][j] = newBoard[i][j];
			--n;//n is number of turns of play left
		}
		//OUTPUT
		for(int i = 0; i < r; ++i){
			for(int j = 0; j < c; ++j)
				cout << oldBoard[i][j];
			cout << '\n';
		}
		--t;
	}
	return 0;
}
