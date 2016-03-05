#include <stdio.h>
int main()
{

    float lbs, stone, kg, inches, foot, metres, cm, age;
    int *bmi;
    char weight, height, ok;

    *bmi = (kg / metres) / metres;

    printf("\n");
    printf("Welcome to the BMI calculator\n");
    printf("--------------------------------------------------------------------------------------\n");
    printf("We calculate your BMI by taking your height and weight and carrying out an equation\n");
    printf("Ideally, we want your weight in KG and your height in Metres, BUT!\n");
    printf("This program can calculate your BMI in ANY measurements\n");
    printf("\n");
    printf("Press Enter to carry on ");
        scanf("%c", &ok);

        printf("Lets Begin\n");
        printf("First we will begin with your weight\n");
        printf("\n");
        printf("\n");

        printf("Options: lbs, stone, kg\n");
        printf("Choose which measurement from the Options menu: ");
            scanf("%s", &weight);

    if (strcmp(&weight, "kg") == 0)                    {
        printf("Please enter your weight in kg: ");
            scanf("%f", &kg);
        printf("\n");

        printf("Now we need to take your height\n");
        printf("Options: metres, feet & inches, cm\n");
        printf("Choose which measurement from the Options menu: ");
            scanf("%s", &height);

            if (strcmp(&height, "metres") == 0)         {
                printf("Please enter your height in metres: ");
                    scanf("%f", &metres);


            printf("Your BMI is %i\n", *bmi);
            return 0;

            }

            else
            return 0;







    }
    else if (strcmp(&weight, "stone") == 0)             {
        printf("Please enter your weight in stone: ");
        scanf("%f", &stone);
    }
    else if (strcmp(&weight, "kg") == 0)                {
        printf("Please enter your weight in kg: ");
        scanf("%f", &kg);
    }
else












return 0;



}
