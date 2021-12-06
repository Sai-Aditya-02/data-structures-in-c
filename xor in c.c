#include<stdio.h>
void main(){
    int n,i=0,c=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n && j!=i;j++){
            if(a[i]==a[j]){
                c+=1;
            }
        }
    }
    printf("%d",c);
}
