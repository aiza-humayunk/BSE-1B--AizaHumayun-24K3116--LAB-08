#include <stdio.h>
using namespace std;

int main(){
		
		int matrix [3][3]={{12,45,32},{2,13,45},{58,72,41}};
		int max = matrix[0][0];
		
		for(int x=0; x<3; x++){
			for(int y=0; y<3; y++){
				
				if(max<matrix[x][y]){
					max=matrix[x][y];
				}
			}
		}
		printf("Maximum number : %d ",max);
		return 0;
}
		
