#include <stdio.h>
#include <string.h>
typedef char lyric[20];

struct lyrics {
    lyric shux;
    lyric nadarama;
    lyric boy;
    lyric bawat;
    lyric magmula;
    lyric kapiling;
    lyric summer;
    lyric pantropiko;
    lyric back;
    lyric islang;
} p[10];

struct rightLyrics {
    lyric shux;
    lyric nadarama;
    lyric boy;
    lyric bawat;
    lyric magmula;
    lyric kapiling;
    lyric summer;
    lyric pantropiko;
    lyric back;
    lyric islang;
}; /*answers; {
    "shux",
    "nadarama",
    "boy",
    "bawat",
    "magmula",
    "kapiling",
    "summer",
    "pantropiko",
    "back",
    "islang",
}*/

int main () {
    printf("Goal: Finish the lyrics (song: Pantropiko by BINI)\n");
    printf("TYPE IN SMALL LETTERS ONLY !!!\n\n");

    printf("Ano ba itong nadarama, oh ----\n");
    printf("1. ");
    scanf("%s", p[0].shux);
    if (strcmp (p[0].shux, "shux") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");
    printf("Ito ba'y pag-ibig na\n");
    
    printf("Totoo ba ang --------,\n");
    printf("2. ");
    scanf("%s", p[1].nadarama);
    if (strcmp (p[1].nadarama, "nadarama") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");

    printf("Cause ---, it feels so good\n");
    printf("3. ");
    scanf("%s", p[2].boy);
    if (strcmp (p[2].boy, "boy") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");
    
    printf("----- araw mas sumasaya\n");
    printf("4. ");
    scanf("%s", p[3].bawat);
    if (strcmp (p[3].bawat, "bawat") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");
    
    printf("------- nang nakita ka\n");
    printf("5. ");
    scanf("%s", p[4].magmula);
    if (strcmp (p[4].magmula, "magmula") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");
    
    printf("Nawawala ang pangangamba pag ika'y -------- na\n");
    printf("6. ");
    scanf("%s", p[5].kapiling);
    if (strcmp (p[5].kapiling, "kapiling") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");

    printf("Feels like ------ when i'm with you\n");
    printf("7. ");
    scanf("%s", p[6].summer);
    if (strcmp (p[6].summer, "summer") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");

    printf("Parang islang ----------\n");
    printf("8. ");
    scanf("%s", p[7].pantropiko);
    if (strcmp (p[7].pantropiko, "pantropiko") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");

    printf("Can't wait to go ---- with you\n");
    printf("9. ");
    scanf("%s", p[8].back);
    if (strcmp (p[8].back, "back") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");

    printf("Sa ------ pantropiko\n");
    printf("10. ");
    scanf("%s", p[9].islang);
    if (strcmp (p[9].islang, "islang") == 0)
        printf ("correct!\n\n");
    else
        printf("wonk wonk, wrong answer lol\n\n");

    printf("oks yun lang :)\nSTAN BINI OR BAGSAK GYUD KAS TEST NIMO SIGE KA\n");

    return 0;

}
