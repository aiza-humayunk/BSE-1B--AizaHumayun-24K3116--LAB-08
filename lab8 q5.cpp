#include <stdio.h>

int main(){
    int temp[4][4]={{12,15,10,9},{11,8,12,13},{14,13,9,7},{16,11,10,8}};
    printf("Cold spots found:\n");
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int t=temp[i][j],cold=1;
            if(i>0&&temp[i-1][j]<=t) cold=0;
            if(i<3&&temp[i+1][j]<=t) cold=0;
            if(j>0&&temp[i][j-1]<=t) cold=0;
            if(j<3&&temp[i][j+1]<=t) cold=0;
            if(cold) printf("- At position (%d,%d) with temperature %d°C\n",i+1,j+1,t);
        }
    }
    return 0;
}

