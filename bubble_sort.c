#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j,t,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        // printf("%d",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<i && j!=i;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                c+=1;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",c);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[n-1]);
    return 0;
}
