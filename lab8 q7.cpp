#include <stdio.h>
using namespace std;

int main(){
	
	for(int x=1; x<6; x++){
		for(int y=5; y>x-1; y--){
			printf(" ");
		}
		for(int y=0; y<(2*x)-1; y++){
			printf("*");
		}
		for(int y=5; y>x-1; y--){
			printf(" ");
		}
		printf("|");
		
		for(int y=5; y>x-1; y--){
			printf(" ");
		}
		for(int y=0; y<(2*x)-1; y++){
			printf("%d",y+1);
		}
		for(int y=5; y>x-1; y--){
			printf(" ");
		}
		printf("| ");
		
		for(int y=5; y>x; y--){
			printf(" ");
		}
		for(int y = 65; y <(2*x)+64; y++) {
	   		printf("%c", y);  
		}
		printf("\n");
	}
	
	
	return 0;
}
