#include <stdio.h>

struct Employee{
    char e_id[8];
    char name[20];
    float salary;
};

void getData(struct Employee *E){
    printf("Enter name: ");
    scanf("%19s", E->name);

    printf("Enter employee ID: ");
    scanf("%7s", E->e_id);
    
    printf("Enter salary: ");
    scanf("%f", &E->salary);
}

void printData(struct Employee E){
    printf("\n");
    printf("Name: %s\n", E.name);
    printf("Employee ID: %s\n", E.e_id);
    printf("Salary: %.2f\n", E.salary);
}

int main(){
    struct Employee E1;
    struct Employee E2;
    struct Employee E3;

    printf("\nEnter data for Employee 1: \n");
    getData(&E1);

    printf("\nEnter data for Employee 2: \n");
    getData(&E2);
    
    printf("\nEnter data for Employee 3: \n");
    getData(&E3);

    printData(E1);
    printData(E2);
    printData(E3);

    return 0;
}