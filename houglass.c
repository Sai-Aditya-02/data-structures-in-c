#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int a[6][6],i,f=0,j,k,t,s=-999,u=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            u=0;
            for(k=i;k<=i+2;k++){
               for(t=j;t<=j+2;t++){
                   u+=a[k][t];
        
                }    
            }
        u-=(a[i+1][j]+a[i+1][j+2]);
        // printf("%d\n",u);
        if(s<u){
            s=u;
            }
        }
    }
    printf("%d",s);
}
