#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

int main(){

	//make board dimensions
	int boardSize = 4;
	int board[boardSize][boardSize];

	//INPUT board state before move
	for(int i = 0; i < boardSize; ++i){
		for(int j = 0; j < boardSize; ++j)
			std::cin >> board[i][j];
	}

	//get move input
	int move = 0;
	std::cin >> move;
	
	//left
	
	
	//OUTPUT board state after move
	for(int i = 0; i < boardSize; ++i){
		for(int j = 0; j < boardSize; ++j){
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}
