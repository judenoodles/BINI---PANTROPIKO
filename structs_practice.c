#include <stdio.h>
#include <string.h>
typedef char word[20];

struct info {
    word *place;
    word *name;
    word *transpo;
} p1, p2;


int main () {
    printf("enter name: ");
    scanf("%s", *p1.name);
    printf("enter the place you always go to: ");
    scanf("%s", *p1.place);
    printf("enter mode of transpo: ");
    scanf("%s", *p1.transpo);
    
    printf("This is the final statement\n");
    printf("Hi, my name is %s. I like %s. I always go there on a %s.\nAnd today is actually my birthday too :)", *p1.name, *p1.place, *p1.transpo);
    
    
    return 0;
}
