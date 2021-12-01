#include <stdio.h>
int VeryBigSum(long int a[20]);
int main(){
    int n,i;
    long int s=0;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++){
        s+=a[i];
    }
    printf("%ld",s);
    return 0;
}
