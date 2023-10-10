#include <stdio.h>
int main() {
    struct Name {
    char fname[50];
    char lname[50];
    char address[50];
}n1;
struct pay 
{
    struct Name n1;
    float sal;
    char desig[50];
}p1;
    printf("Enter first name: ");
    scanf("%s", p1.n1.fname); // input name
    printf("Enter last name: ");
    scanf("%s", p1.n1.lname); // input sirname
    printf("Enter address: ");
    scanf("%s", p1.n1.address); // input address
    printf("Enter Salary: ");
    scanf("%f",&p1.sal);
    printf("Enter Designation: ");
    scanf("%s",p1.desig);
    printf("First Name: %s\n", p1.n1.fname);
    printf("Last Name: %s\n", p1.n1.lname);
    printf("Address: %s\n", p1.n1.address);
    printf("Salary: %f\n",p1.sal);
    printf("Designation: %s\n",p1.desig);
    return 0;
}