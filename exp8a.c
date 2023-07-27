#include<stdio.h>
int main(){
    int i,n,sum=0;
    float avg;
    printf("enter the number of elements");
    scanf("%d ",&n);
    int a[n];
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = (float)sum/n;
    printf("sum of all numbers=%d\n",sum);
    printf("average of all numbers=%2f\n",avg);
    return 0;
}