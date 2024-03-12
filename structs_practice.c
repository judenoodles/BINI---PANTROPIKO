#include <stdio.h>
#include <string.h>
typedef char word[20];

struct info {
    word place;
    word name;
    int age;
} p[2];

//struct info {}

int main () {

    for (int i = 0; i < 2; i++) {
        printf("enter name: ");
        scanf("%s", p[i].name);
        printf("what do you like: ");
        scanf("%s", p[i].place);
        printf("enter age: ");
        scanf("%d", &p[i].age);
    }
    
    for (int i = 0; i < 2; i++) {
        printf("hey %s, ive got %d questions for you.. yes or %s", p[i].name, p[i].age, p[i].place);
        printf("\n");
    }

    return 0;

}
