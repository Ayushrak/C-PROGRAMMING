// 1
// 00
// 111
// 0000
// 11111
 #include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0) printf("1");
            else printf("0");
            
        }
        printf("\n");
    }
    return 0;
}