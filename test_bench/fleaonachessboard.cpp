#include <stdio.h>
#include <iostream>

#include <math.h>


using namespace std;


int is_white_tile(int sideLength, int x, int y){
	int x_tile = x/sideLength;
       	int y_tile = y/sideLength;	
	if ((x_tile + y_tile)%2 == 0)
		return false;
	if(x%sideLength == 0 || y%sideLength == 0)
		return false;

	return true;
}

bool cannot_escape(int sideLength, int x, int y, int dx, int dy){
	if (is_white_tile(sideLength, x, y))
		return false;
	if (dx % sideLength != 0 && sideLength % dx != 0)
		return false;
	if (dy % sideLength != 0 && sideLength % dy != 0)
	       return false;	
	return true;
}

int main(){
	
	int sideLength=0;
	int x=0;
	int y=0;
	int dx=0;
	int dy=0;

	cin >> sideLength >> x >> y >> dx >> dy;
	while((sideLength + x + y + dx  + dy) != 0 ){
		if(cannot_escape(sideLength, x, y, dx, dy))
			cout << "The flea cannot escape from black squares.\n";
		else{
			int jumps = 0;
			
			while(not is_white_tile(sideLength, x, y)){
				jumps++;
				x += dx;
				y += dy;
			}
			printf("After %d jumps the flea lands at (%d, %d).\n", jumps, x, y);
		}
		cin >> sideLength >> x >> y >> dx >> dy;
	}
	
	return 0;
}
