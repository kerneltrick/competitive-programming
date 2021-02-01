#include <iostream>


int main(){
	
	int x = 0;
	int k = 0;

	scanf("%d", &x);

	int f = 2;

	while(x >= f*f){
		if(x % f == 0){
			x = x/f;
			k+=1;
		}else
			f+=1;

	}
	k+=1;


	printf("%d\n", k);

		
	

}

