#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct weight
{
    float kg;
    float stone;
    float lbs;
};

struct height
{
    float inches;
    float foot;
    float metres;
};

struct age
{
    int age;
};

struct BMI
{
    char BMI;
};
int main()
{

        char ok;
        char weight1;
        char height1;
        char age1;


        struct weight *weight;
        struct BMI *bmi;
        struct height *height;
        struct age *age;

        weight = (struct weight *)malloc(sizeof(struct weight));
        bmi = (struct BMI *)malloc(sizeof(struct BMI));
        height = (struct height *)malloc(sizeof(struct height));
        age = (struct age *)malloc(sizeof(struct age));

        weight->kg;
        weight->stone;
        weight->lbs;

        bmi->BMI;

        height->inches;
        height->foot;
        height->metres;

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
        scanf("%s", &weight1);

        if (strcmp(&weight1, "lbs") == 0)               {
            printf("Please enter your weight in lbs: ");
            scanf("%f", weight->lbs);
        }
        else if (strcmp(weight1, "stone") == 0)        {
            printf("Please enter your weight in stone: ");
            scanf("%f", weight->stone);
        }
        else if (strcmp(&weight1, "kg") == 0)           {
            printf("Please enter your weight in kg: ");
            scanf("%f", weight->kg);
        }
        else
        return 0;



}
