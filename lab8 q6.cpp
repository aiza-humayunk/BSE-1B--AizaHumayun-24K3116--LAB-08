#include <stdio.h>
using namespace std;

int main(){
	
	for(int x=0; x<5; x++){
		for(int y=5; y>x; y--){
			printf(" ");
		}
		for(int y=0; y<=x; y++){
			printf("*");
		}
		printf(" |");
		for(int y=5; y>x; y--){
			printf(" ");
		}
		for(int y=0; y<=x; y++){
			printf("%d",y+1);
		}
		printf(" |");
		for(int y=5; y>x; y--){
			printf(" ");
		}
		for(int i = 65; i <= 65+x; i++) {
	   		printf("%c", i);  
		}

		printf("\n");
	}
	
	
	return 0;
}
