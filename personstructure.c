#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int age;
        float salary;
    } employee,hr;
    hr.age=45;
    hr.salary=91,000.5;
    strcpy(hr.name,"ashok");

    employee.age=23;
    employee.salary=40,000.00;
    strcpy(employee.name,"ayush");
    printf("%d\n",hr.age);
    printf("%f\n",hr.salary);
    printf("%s\n",hr.name);

    printf("%d\n",employee.age);
    printf("%f\n",employee.salary);
    printf("%s\n",employee.name);
    return 0;
}