#include <stdio.h>
int main()
{

    char a[]="", b[]="";
    int c;


    do {

    printf("Fill in the blank.\n");
    printf("Boy, those mudslimes across the road sure are ");
    scanf("%s", a);

        if (strcmp(a, "quiet") == 0)                    {
            printf("Well done, you are correct!\n");

        }
        else                                            {
            printf("Wrong! Try Again\n");
            printf("Want to try and guess again? ");
                scanf("%s", b);
                    if (strcmp(b, "yes") == 0)          {
                        printf("Ok,\n");
                        c = 0;
                    }
                    else if (strcmp(b, "no") == 0)      {
                        printf("Quiter.\n");
                    }
        }
    } while (c < 1);
        return 0;
}
