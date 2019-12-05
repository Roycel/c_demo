#include <stdio.h>
#include <stdlib.h>
#define LENGTH_NAME 8
#define LENGTH_HOBBY 10
#define LENGTH_COURSE 5
#define LENGTH_PERSON 3


struct Student
{
    char name[LENGTH_NAME];
    char hobby[LENGTH_HOBBY];
    float score[LENGTH_COURSE];
} studentmsg[LENGTH_PERSON];

int StudentGenerate();
int StudentDisplay();
int GradeAverage();

int main()
{
    StudentGenerate();
    StudentDisplay();
    GradeAverage();
    system("pause");
    return 0;
}
int StudentGenerate()
{
    char characters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    srand(1);
    for (int i = 0; i < LENGTH_PERSON; i++)
    {
        for (int j = 0; j < LENGTH_NAME; j++)
        {
            studentmsg[i].name[j] = characters[rand() % 11];
        }
        for (int j = 0; j < LENGTH_HOBBY; j++)
        {
            studentmsg[i].hobby[j] = characters[rand() % 11];
        }
    }
    for (int i = 0; i < LENGTH_PERSON; i++)
    {
        for (int j = 0; j < LENGTH_COURSE; j++)
        {
            studentmsg[i].score[j] = rand() % 101;
        }
    }

    return 0;
}
int StudentDisplay()
{
    printf("\tname\t\thobby\t\t");
    for (int i = 0; i < LENGTH_COURSE; i++)
    {
        printf("course%d\t", i + 1);
    }
    printf("\n");
    for (int i = 0; i < LENGTH_PERSON; i++)
    {
        printf("%s\t", studentmsg[i].name);
        printf("%s\t", studentmsg[i].hobby);

        for (int j = 0; j < LENGTH_COURSE; j++)
        {
            printf("%.2f\t", studentmsg[i].score[j]);
        }
        printf("\n");
    }
    return 0;
}
int GradeAverage()
{
    float sum = 0;

    printf("here are the results :\n");
    printf("Course Average\t");
    for (int i = 0; i < LENGTH_COURSE; i++)
    {
        for (int j = 0; j < LENGTH_PERSON; j++)
        {
            sum = sum + studentmsg[j].score[i];
        }
        sum = sum / LENGTH_PERSON;
        printf("%.2f\t", sum);
    }
    printf("\nPerson Average\t");
    for (int i = 0; i < LENGTH_PERSON; i++)
    {
        for (int j = 0; j < LENGTH_COURSE; j++)
        {
            sum = sum + studentmsg[i].score[j];
        }
        sum = sum / LENGTH_COURSE;
        printf("%.2f\t", sum);
    }
    printf("\n");
    return 0;
}