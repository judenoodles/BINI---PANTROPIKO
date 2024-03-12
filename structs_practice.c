#include <stdio.h>
#include <string.h>
typedef char word[20];

struct info {
    word place;
    word name;
    int age;
} p1, p2;


int main () {
    printf("enter name: ");
    scanf("%s", p1.name);
    printf("what do you like: ");
    scanf("%s", p1.place);
    printf("enter age: ");
    scanf("%d", &p1.age);
    
    
    printf("This is the final statement:\n");
    printf("Hi, my name is %s. I like %s. I'm %c years old.\nAnd today is actually my birthday too :)", p1.name, p1.place, p1.age);
    
    
    return 0;

}
