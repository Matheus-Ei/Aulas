#include <cstdio>
#include <cstring>

// Define a struct called "Person" with members name, age, and address
struct Person {
    char name[100];
    int age;
    char address[100];
};

int main() {
    // Create an instance of the Person struct
    Person person;

    // Assign values to the struct members
    printf("Enter name: ");
    scanf("%s", person.name);

    printf("Enter age: ");
    scanf("%d", &person.age);

    printf("Enter address: ");
    scanf("%s", person.address);

    // Access and display the struct members
    printf("\nName: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s\n", person.address);

    return 0;
}
