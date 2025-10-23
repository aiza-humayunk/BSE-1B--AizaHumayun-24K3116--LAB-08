#include <stdio.h>
using namespace std;

int main(){
	
	int num;
	printf("Multiplication Table\n");
	printf("Enter number: ");
	scanf("%d",&num);
	printf("\n");
	
	for(int x=1; x<=num; x++){
		printf("%d: ",x);
		for(int y=1; y<=10; y++){
		printf("\t%d",x*y);
		}
	printf("\n");
	}
		return 0;
}

