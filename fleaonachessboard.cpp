#include <stdio.h>
#include <iostream>

#include <math.h>


using namespace std;

//checks tile color
bool is_white_tile(long long sideLength, long long x, long long y){
	long long x_tile = x/sideLength;
       	long long y_tile = y/sideLength;	
	if ((x_tile + y_tile)%2 == 0)
		return false;
	if(x%sideLength == 0 || y%sideLength == 0)
		return false;

	return true;
}

int main(){
	
	long long sideLength=0;
	long long x;
	long long y;
	long long dx;
	long long dy;
	long long jumps;
	long long start_x=0;
	long long start_y=0;
	

	cin >> sideLength >> x >> y >> dx >> dy;
	//End program with line of zeros as input
	while((sideLength + x + y + dx + dy) != 0 ){
		start_x = x%sideLength;
		start_y = y%sideLength;
		//Count number of iterations through while(flea jumps)
		for(jumps = 0LL; ; jumps++){
			//stop jumping if on white tile on white tile 
			if(is_white_tile(sideLength, x, y)){
				printf("After %lld jumps the flea lands at (%lld, %lld).\n", jumps, x, y);
				break;
			}
			//Check if flea can only land on black squares
			//If the flea ever lands on at the same mod coordinate pair as it started on,
			//we know the flea is in a never ending loop
			if((jumps!=0 and x%sideLength == start_x and y%sideLength == start_y)){
				printf("The flea cannot escape from black squares.\n");
				break;
			}

			//Move coordinates
			x+=dx;
			y+=dy;

		}
		//Get new line of input and start again
		cin >> sideLength >> x >> y >> dx >> dy;
	}
	
	return 0;
}
