#include <stdio.h>
#include <stdlib.h>
#define LENGTH_NAME 8
#define LENGTH_ROW 3
#define LENGTH_COLUMN 3
#define LENGTH_GROUP 3
#define LENGTH_BAUDWIDTH 3

typedef enum
{
    low = 0,
    mid = 1,
    high = 2
} baudwidth;
typedef struct
{
    char name[LENGTH_NAME];
    int power;
    int baudwidth[LENGTH_BAUDWIDTH];
    int matrix[LENGTH_ROW][LENGTH_COLUMN];
} configure;

int ConfigureGenerate(configure group[], int n);
int ConfigureDisplay(configure group[], int n);
int ConfigureMatrixDisplay(configure *j);
int ConfigureExchange(configure *p, int x, int y);
int ConfigurePowerMax(configure *p, int n);
int ConfigurePowerMath(configure *p, char c, int n);
int ConfigurePowerMultiply(configure *p, int n);
int ConfigurePowerSubtraction(configure *p, int n);

int main()
{
    configure group[LENGTH_GROUP];
    ConfigureGenerate(group, LENGTH_GROUP);
    printf("1>输出3组配置的默认值\n");
    ConfigureDisplay(group, LENGTH_GROUP);
    printf("2>第一组与第二组配置互换，输出第一组\n");
    ConfigureExchange(group, 0, 1);
    ConfigureDisplay(group, 1);
    printf("3>输出功率最大的一组配置\n");
    ConfigureExchange(group, 0, ConfigurePowerMax(group, LENGTH_GROUP));
    ConfigureDisplay(group, 1);
    printf("4>输出第3组的矩阵值\n");
    ConfigureMatrixDisplay(group + 2);
    printf("5>输出第三组功率的10倍值，减少10的值\n");
    printf("10倍值：\t%d\n", ConfigurePowerMath(group + 2, '*', 10));
    printf("减少10的值：\t%d\n\n", ConfigurePowerMath(group + 2, '-', 10));

    getchar();
    return 0;
}

int ConfigureGenerate(configure group[], int n)
{
    char       name[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    int        power[] = {10, 20, 30, 40, 50, 60};
    baudwidth  baudwidth[LENGTH_BAUDWIDTH] = {low, mid, high};
    int        matrix[LENGTH_ROW][LENGTH_COLUMN] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int        (*p)[LENGTH_COLUMN];
    p = matrix;
    configure *j = group;
    for (int i = 0; i < n; i++, j++)
    {
        j->name[0] = name[i];
        j->power = power[i];
        j->baudwidth[i] = 0 /* baudwidth[i]*/;

        for (int a = 0; a < LENGTH_ROW; a++)
        {
            for (int b = 0; b < LENGTH_COLUMN; b++)
            {
                j->matrix[a][b] = *(*(p + a) + b) + (j - group);
            }
        }
    }
    return 0;
}
int ConfigureDisplay(configure group[], int n)
{

    printf("\tname\tpower\tbaudwidth\tmatrix\n");
    configure *j = group;
    for (int i = 0; i < n; i++, j++)
    {
        printf("\t%c\t", j->name[0]);
        printf("%d\t", j->power);
        for (int a = 0; a < LENGTH_BAUDWIDTH; a++)
        {

            printf("%d\t", j->baudwidth[a]);
        }

        ConfigureMatrixDisplay(j);
    }
    return 0;
}
int ConfigureMatrixDisplay(configure *j)
{
    for (int m = 0; m < LENGTH_ROW; m++)
    {
        for (int n = 0; n < LENGTH_COLUMN; n++)
        {
            printf("%d\t", j->matrix[m][n]);
        }
    }
    printf("\n");
    return 0;
}
int ConfigureExchange(configure *p, int x, int y)
{
    configure *temp = (configure *)malloc(sizeof(*p));
    *temp = *(p + x);
    *(p + x) = *(p + y);
    *(p + y) = *temp;
    return 0;
}
int ConfigurePowerMax(configure *p, int n)
{
    int temp, i = 0;
    for (; i < n - 1; i++)
    {
        int front, behind;
        front = (p + i)->power;
        behind = (p + (i + 1))->power;
        if (front > behind)
        {
            temp = i;
        }
        else
        {
            temp = i + 1;
        }
    }
    return temp;
}
int ConfigurePowerMath(configure *p, char c, int n)
{
    int temp1;
    switch (c)
    {
    case '*':
        temp1 = ConfigurePowerMultiply(p, n);
        break;
    case '-':
        temp1 = ConfigurePowerSubtraction(p, n);
        break;
    default:
        break;
    }
    return temp1;
}
int ConfigurePowerMultiply(configure *p, int n)
{
    int temp;
    temp = (p->power) * n;
    return temp;
}
int ConfigurePowerSubtraction(configure *p, int n)
{
    int temp;
    temp = (p->power) - n;
    return temp;
}