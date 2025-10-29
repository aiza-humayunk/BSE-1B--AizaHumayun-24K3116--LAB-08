#include <stdio.h>

int main(){
	int marks[3][4];
	float sum=0;
	float avg;
	
	for(int x=0;x<3;x++){
		printf("Enter marks for class %d: ",x+1);
		for(int y=0;y<4;y++){
			scanf(" %d",&marks[x][y]);
		}
	}
		
	for(int x=0;x<3;x++){
		sum=0;
		for(int y=0;y<4;y++){
			sum=sum+marks[x][y];
		}
		avg=sum/4;
		printf("\nAverage for class %d is : %f",x,avg);
	}
	
	return 0;
}
