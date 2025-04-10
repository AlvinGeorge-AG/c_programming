#include <stdio.h>

#define C_SIZE 50  // user-defined constant for string size

// Declare a union with 5 string variables
union Address {
    char Name[C_SIZE];
    char House_Name[C_SIZE];
    char City_Name[C_SIZE];
    char State[C_SIZE];
    char Pin_Code[C_SIZE];
};

int main() {
    union Address person;

    printf("Enter Name: ");
    scanf("%s", person.Name);  // Only Name will be stored
    printf("Name of person: %s\n", person.Name);

    printf("Enter House Name: ");
    scanf("%s", person.House_Name);  // Overwrites previous value
    printf("House name: %s\n", person.House_Name);

    printf("Enter the City : ");
    scanf("%s", person.City_Name);  // Overwrites again
    printf("The city is : %s\n", person.City_Name);

    printf("Enter the State: ");
    scanf("%s", person.State);  // Again overwritten
    printf("State : %s\n", person.State);

    printf("Enter Pin Code: ");
    scanf("%s", person.Pin_Code);  // Final write
    printf("The pin : %s\n", person.Pin_Code);
    return 0;
}