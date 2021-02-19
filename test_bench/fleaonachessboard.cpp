#include <stdio.h>
#include <iostream>

#include <math.h>


using namespace std;

//checks tile color
int is_white_tile(int sideLength, int x, int y){
	int x_tile = x/sideLength;
       	int y_tile = y/sideLength;	
	if ((x_tile + y_tile)%2 == 0)
		return false;
	if(x%sideLength == 0 || y%sideLength == 0)
		return false;

	return true;
}

int main(){
	
	int sideLength=0;
	int x=0;
	int y=0;
	int dx=0;
	int dy=0;
	int start_x=0;
	int start_y=0;

	cin >> sideLength >> x >> y >> dx >> dy;
	//End program with line of zeros as input
	while((sideLength + x + y + dx  + dy) != 0 ){
		start_x = x%sideLength;
		start_y = y%sideLength;
		int jumps = 0;
		while(true){
			//Check if flea can only land on black squares
			//If the flea ever lands on at the same mod coordinate pair as it started on,
			//we know the flea is in a never ending loop
			if(jumps!=0 and x%sideLength == start_x and y%sideLength == start_y){
				cout << "The flea cannot escape from black squares.\n";
				break;
			}
			//Keep jumping until flea lands on white tile 
			if(is_white_tile(sideLength, x, y)){
				printf("After %d jumps the flea lands at (%d, %d).\n", jumps, x, y);
				break;
			}
			//Count number of iterations through while(flea jumps)
			jumps++;
			//Move coordinates
			x+=dx;
			y+=dy;

		}
		//Get new line of input and start again
		cin >> sideLength >> x >> y >> dx >> dy;
	}
	
	return 0;
}
