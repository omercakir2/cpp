#include <stdio.h>

int main(void){
    int rep;
    printf("How many lines");
    scanf("%d",&rep);
    int i,j ;
    
    for(i=0;i<rep+1;i++){
        for(j=0;j<i;j++){
            printf("#");
            
        }
        printf("\n");
        
    }
    return 0;
}
