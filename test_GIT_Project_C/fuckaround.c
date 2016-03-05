#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct player1          //struct is literally a storage location holding our precious VARIABLES!! HOARD THEM!!
{
    char a[50];
    char b[30];
    char c[40];
    char d[40];           //we are going to compare this
};

struct player2
{
    char a[50];
    char b[30];
    char c[40];
    char d[40];
};

int main()
{
        struct player1 *p1;          //we are essentially assiging an int value here, think about it man
        struct player2 *p2;
        int i;                      //struct is the location,
                                    //player1 = name, and also making a pointer (obviously)

        p1 = (struct player1 *) malloc(sizeof(struct player1));
        p2 = (struct player2 *) malloc(sizeof(struct player2));

        p1->a;
        p1->b;
        p1->c;
        p1->d;
        p2->a;
        p2->b;
        p2->c;
        p2->d;

        printf("We are going to compare two players questions, let the audience decide who wins...\n");

        printf("Will the first player please enter their name: ");
            scanf("%c", p1->a);
        printf("Will the second player please enter their name: ");
            scanf("%c", p2->a);
        //printf("Loading...\n");
        //    printf("Remember to take regular breaks from the PC!\n");



        printf("Will player1 please step up to the terminal\n");
        printf("Press ENTER to continue.");
            scanf("%i", &i);


        printf("Who would win in a fight; a fully prepared and coked up\n"
                "John Cena vs a, hmm, I don't know, a giraffe? ");
                scanf("%s", p1->b);

        //printf("Righto, question 2.");






        free(p1);
        free(p2);

}
