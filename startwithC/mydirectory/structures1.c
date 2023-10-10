#include <stdio.h>

struct Person {
    char name[50];
    char sirname[50];
    char address[50];
};

int main() {
    struct Person p1; // declare a Person structure variable
    printf("Enter name: ");
    scanf("%s", p1.name); // input name
    printf("Enter age: ");
    scanf("%s", p1.sirname); // input sirname
    printf("Enter address: ");
    scanf("%s", p1.address); // input address
    printf("Name: %s\n", p1.name);
    printf("Age: %s\n", p1.sirname);
    printf("Address: %s\n", p1.address);
    return 0;
}