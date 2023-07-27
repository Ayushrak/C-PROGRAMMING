#include<stdio.h>
struct record
{
    int rollno;
    char name[30];
    float per;
};
int main()
{
    struct record stu[5];
    int i;
    //input 5 records
    for(i=0;i<5;i++){
        printf("enter record no %d_\n",i+1);
        printf("enter name");
        scanf("%s",stu[i].name);
        printf("enter rollno");
        scanf("%d",&stu[i].rollno);
        printf("enter percentage");
        scanf("%f",&stu[i].per);
    }
    //displaying records
    for(i=0;i<5;i++){
        if(stu[i].per>70)
    {
        printf("rollno=%d\n",stu[i].rollno);
        printf("Name=%s\n",stu[i].name);
        printf("percentage=%2f\n",stu[i].per);
    }
    }
    return 0;
}