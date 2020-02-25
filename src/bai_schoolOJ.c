#include "stdio.h"

int add(void);
int divide(void);
int polynomial(void);
int four_operations(void);
int bit_separation(void);
int power(void);
int sum_difference_sequence(void);
int chicken_rabbit(void);
int dollar_trans(void);
int average(void);
int area_circle(void);
int area_surface(void);
int real_absolute_value(void);
int distance_two_point(void);
int area_triangle(void);
int time_interval(void);
int interest_rate(void);
int bit_statics(void);
int compute_ticket(void);
int sort_two_number(void);
int max_three_number(void);
int sort_three_number(void);
int trans_character(void);
int compute_char_number(void);
int max_three_ascii(void);
int judge_char_type(void);
int judge_num_of_daffodils(void);
int judge_leap_year(void);
int judge_triangle(void);
int judge_right_triangle(void);
int judge_quadrant(void);
int compute_salary(void);
int judge_grade_level(void);
int judge_num_of_day(void);
int judge_operation(void);
int compute_n_number(void);
int compute_sum_sequence1(void);
int compute_sum_sequence2(void);
int compute_sum_sequence3(void);
int statics_value(void);
int print_list_log(void);
int print_list_factorial(void);
int compute_sum_factorial(void);
int compute_sum_sequence4(void);
int compute_sum_sequence5(void);
int compute_sum_sin_taylor(void);
int recursion_peach(void);
int recursion_fibonacci(void);
int find_lucky_num(void);
int statics_bit_jump(void);
int compute_binary_conversion(void);
int compute_inequality(void);
int compute_common_divisor(void);
int compute_cycle(void);
int control_car_position(void);

int main(void)
{
    control_car_position();
    getchar(); //方便程序的测试
    return 0;
}

/* 
    //1000 整数a+b

    提交遇到错误：输出格式问题，输出前并不需要换行，
                因为在提示scanf()输入完毕时打过一个回车
                scanf检测的数之间用分隔符空格、table、回车隔开，最后回车确认一下
*/
int add(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
    return 0;
}

/*
    //1001 植树问题

    本质上应该是除法的商和余数运算
*/
int divide(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d %d", m / n, m % n);
    return 0;
}

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/*
    //1002 简单多项式求值

    多项式为y=2*x^2+x+8，输入输出均要求整数
*/
int polynomial(void)
{
    int x, y;
    scanf("%d", &x);
    //    y=(int)pow((double)x,2);
    //    y=2*y+x+8;
    printf("%d", 2 * ((int)pow((double)x, 2)) + x + 8);
    return 0;
}

/*
    //1003 两个整数四则运算

    输入num1，num2输出和、差、积、整数商、余数
*/
int four_operations(void)
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    printf("%d %d %d %d %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);
    return 0;
}

/*
    //1004 三位数的数位分离

    输入任意三位数，输出个、十、百位
*/
int bit_separation(void)
{
    int a;
    scanf("%d", &a);
    printf("%d %d %d", a % 10, a / 10 % 10, a / 100);
    return 0;
}
/*
    //别人的优秀解法

    int main()
    {
    int n, m;
    scanf("%d", &n);
    m = (n%10)*100 + (n/10%10)*10 + (n/100);
    printf("%03d\n", m);
    return 0;
    }
    //通过用m暂时存储输出结果的方式，
    //用%03d输出个位是0且允许输出的情况，
    //用%d输出个位是0不允许输出的情况
*/

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/*
    //1005 整数幂

    输入3整数，输出3行，每行3个整数，分别是他们1次幂、2次幂、3次幂
*/
int power(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%-9d%-9d%-9d\n", a, (int)pow((double)a, 2), (int)pow((double)a, 3));
    printf("%-9d%-9d%-9d\n", b, (int)pow((double)b, 2), (int)pow((double)b, 3));
    printf("%-9d%-9d%-9d\n", c, (int)pow((double)c, 2), (int)pow((double)c, 3));
    return 0;
}

/*
    //1006 求等差数列的和

    输入首项、末项、公差，输出前n项和
    容易错在除法过早使用使得中间值的小数被省略
*/
int sum_difference_sequence(void)
{
    int a, b, d;
    scanf("%d %d %d", &a, &b, &d);
    d = (b - a) / d + 1;
    printf("%d", d * (a + b) / 2);
    return 0;
}

/*
    //1007鸡兔同笼

    输入m个头n个脚,输出鸡和兔只数
*/
int chicken_rabbit(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", (4 * a - b) / 2, (b - 2 * a) / 2);
    return 0;
}

/*
    //1008 美元和人民币

    输入美元，输出人民币，保留2位，汇率规定6.5573,建议用double
*/
int dollar_trans(void)
{
    double a;
    scanf("%lf", &a);
    printf("%.2lf", a * 6.5573);
    return 0;
}

/*
    //1009 求平均分

    输入三个整数，输出平均数，保留两位小数
*/
int average(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f", (float)(a + b + c) / 3);
    return 0;
}

/*
    //1010 求圆的周长和面积

    输入实数半径，输出周长、面积，保留两位
*/
int area_circle(void)
{
    const double pi = 3.14159;
    double r;
    scanf("%lf", &r);
    printf("%.2lf %.2lf", 2 * pi * r, pi * r * r);
    return 0;
}

/*
    //1011 圆柱体表面积

    输入两个实数r、h，输出一个实数，保留2位
*/
int area_surface(void)
{
    const double pi = 3.14159;
    double r, h;
    scanf("%lf %lf", &r, &h);
    printf("%.2lf", 2 * pi * r * r + 2 * pi * r * h);
    return 0;
}

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/*
    //1012 求实数绝对值

    输入实数，输出绝对值，保留2位
*/
int real_absolute_value(void)
{
    double a;
    scanf("%lf", &a);
    printf("%.2lf", fabs(a));
    return 0;
}

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/*
    //1013 求两点间距离

    输入4个实数，输出1个实数，保留两位
*/
int distance_two_point(void)
{
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%.2lf", sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
    return 0;
}

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/*
    //1014 求三角形面积

    输入3个实数边长，输出面积，保留两位
*/
int area_triangle(void)
{
    double a, b, c, s;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    printf("%.2f", sqrt(s * (s - a) * (s - b) * (s - c)));
    return 0;
}

/* 
    //1015 计算时间间隔

    输入两行时:分:秒，输出整数表示时间间隔秒数
*/
int time_interval(void)
{
    int a, b, c, d, e, f;
    scanf("%d:%d:%d\n%d:%d:%d", &a, &b, &c, &d, &e, &f);
    printf("%d", ((d - a) * 3600 + (e - b) * 60 + (f - c)));
    return 0;
}

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/* 
    //1016 银行利率

    输入一个正整数和一个实数，分别代表存款年数和存款本金。
    输出一个双精度实数，保留6位。
    设银行1年期定期存款年利率为2.25%，存款本金为deposit元，试编程计算并输出n年后的本利之和。
*/
int interest_rate(void)
{
    const double rate = 0.0225;
    double deposit, result;
    int n;
    scanf("%d %lf", &n, &deposit);
    printf("%.6lf", deposit * pow(1 + rate, n));
    return 0;
}

/* 
    //1017 判断正整数位数

    输入一个不多于5位正整数，输出位数
    提交时遇到错误：没有对0做处理（不是说好的输入正整数吗？）
*/
int bit_statics(void)
{
    long a;
    int n = 0;
    scanf("%d", &a);
    if (a > 0)
    {
        while (a != 0)
        {
            a = a / 10;
            n++;
        }
        printf("%d", n);
    }
    else
    {
        printf("1");
    }
    return 0;
}

/* 
    //1019 公园门票

    输入一个正整数购票数量，输出一个整数金额
    每人50，满30张，每张减两元
*/
int compute_ticket(void)
{
    int a;
    scanf("%d", &a);
    if (a < 30)
    {
        printf("%d", a * 50);
    }
    else
    {
        printf("%d", a * 48);
    }
    return 0;
}

/* 
    //1020 两整数排序

    输入两个整数x，y，输出从小到大顺序
*/
int sort_two_number(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d", b, a);
    }
    return 0;
}

/* 
    //1021 三整数最大值

    输入三个整数，输出最大整数
*/
int max_three_number(void)
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    printf("%d", max);
    return 0;
}

/* 
    //1022 三个数排序

    输入三个整数，输出从大到小顺序
*/
int sort_three_number(void)
{
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}

/* 
    //1023 大小写转换

    输入一个字符，输出一个字符
    小写字母输出大写，大写字母输出本身
    提交时错误：小写97-122，大写65-90，-32还是+32要正确
*/
int trans_character(void)
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
        a = a - 32;
    printf("%c", a);
    return 0;
}
/* 
    (ch>=‘a’&&ch<=’z’)?(ch-32):ch
*/

/* 
    //1024 计算字母序号

    输入一个字母（不论大小写），输出一个整数
*/
int compute_char_number(void)
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("%d", a - 96);
    if (a >= 'A' && a <= 'Z')
        printf("%d", a - 64);
    return 0;
}

/* 
    //1025 最大字符

    输入三个ASC字符，输出最大的字符
    输入的字符不包括空白字符
*/
int max_three_ascii(void)
{
    char a, b, c, max;
    scanf("%c %c %c", &a, &b, &c);
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    printf("%c", max);
    return 0;
}

/* 
    //1026 字符类型判断

    输入一个字符，是大写字母，输出upper，小写字母，输出lower，数字字符，输出digit，其他字符，输出other
*/
int judge_char_type(void)
{
    char a;
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
        printf("lower");
    else if (a >= 65 && a <= 90)
        printf("upper");
    else if (a >= 48 && a < 58)
        printf("digit");
    else
        printf("other");
    return 0;
}

/* 
    //1027 判断水仙花数

    输入一个三位正整数，输出yes或no
*/
int judge_num_of_daffodils(void)
{
    int a, b;
    scanf("%d", &a);
    b = (a / 100) * (a / 100) * (a / 100) + (a / 10 % 10) * (a / 10 % 10) * (a / 10 % 10) + (a % 10) * (a % 10) * (a % 10);
    if (a == b)
        printf("yes");
    else
        printf("no");
    return 0;
}

/* 
    //1028 判断闰年

    输入一个整数，输出Yes或No,注意大小写
*/
int judge_leap_year(void)
{
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}

/* 
    //1029 判断三角形

    输入3个int范围整数，输出Yes或No
*/
int judge_triangle(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Yes");
    else
        printf("No");
    return 0;
}

/* 
    //1030 判断直角三角形

    输入3个正整数，输出yes或no
*/
int judge_right_triangle(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        printf("yes");
    else
        printf("no");
    return 0;
}

/* 
    //1031 判断象限

    输入x，y，输出第几象限
*/
int judge_quadrant(void)
{
    int x, y, n;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        n = 1;
    else if (x < 0 && y > 0)
        n = 2;
    else if (x < 0 && y < 0)
        n = 3;
    else
        n = 4;
    printf("%d", n);
    return 0;
}

/* 
    //1032 员工薪水

    输入整数表示销售额，输出薪水，保留2位
    基本工资是1500元/月
    销售额小于等于10000元时，按照5%提成；
    销售额大于10000元但小于等于50000元时，超出10000部分按照3%提成；
    销售额大于50000元时，超出50000部分按照2%提成。
*/
int compute_salary(void)
{
    long x;
    double y;
    scanf("%d", &x);
    if (x <= 10000)
        y = 1500 + x * 0.05;
    else if (x <= 50000)
        y = 1500 + 10000 * 0.05 + (x - 10000) * 0.03;
    else
        y = 1500 + 10000 * 0.05 + 40000 * 0.03 + (x - 50000) * 0.02;
    printf("%.2lf", y);
    return 0;
}

/* 
    //1033  五级制成绩

    输入0-100整数，输出等级A、B...E
*/
int judge_grade_level(void)
{
    int n, level;
    scanf("%d", &n);
    if (n >= 90)
        level = 'A';
    else if (n >= 80 && n < 90)
        level = 'B';
    else if (n >= 70 && n < 80)
        level = 'C';
    else if (n >= 60 && n < 70)
        level = 'D';
    else
        level = 'E';
    printf("%c", level);
    return 0;
}

/* 
    //1036 某年某月多少天

    输入年份 月份，输出天数
    提交时错误：小心case过多时忘记break
*/
int judge_num_of_day(void)
{
    int year, month, day;
    scanf("%d %d", &year, &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            day = 29;
        else
            day = 28;
    }
    }
    printf("%d", day);
    return 0;
}

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/* 
    //1037 四则运算

    输入表达式s1 op s2，即两个实数和一个运算符，输出值，保留2位
    如果运算符不合法或除数为0输出Wrong input！
    提交时错误：逻辑错误导致输出错误信息时又输出一次答案
*/
int judge_operation(void)
{
    double s1, s2, result;
    char op;
    scanf("%lf %c %lf", &s1, &op, &s2);
    int error = 0;
    switch (op)
    {
    case '+':
        result = s1 + s2;
        break;
    case '-':
        result = s1 - s2;
        break;
    case '*':
        result = s1 * s2;
        break;
    case '/':
        if (fabs(s2) > 1e-10)
            result = s1 / s2;
        else
            error = 1;
        break;
    default:
        error = 1;
    }
    if (error == 0)
        printf("%0.2f\n", result);
    else
        printf("Wrong input!");
    return 0;
}

/* 
    //1039 n个数求和

    输入正整数n，第二行n个整数，输出和
    提交时错误：进入for循环之前没有初始化y会导致编译错误或者答案错误
*/
int compute_n_number(void)
{
    int n, y;
    scanf("%d", &n);
    //y=0;
    for (int i = 0; i < n; i++)
    {
        int j;
        scanf("%d", &j);
        y = y + j;
    }
    printf("%d", y);
    return 0;
}

/* 
    //1040 通项1/(2n-1)的数列求和

    输入一个整数n，输出和，保留2位 
*/
int compute_sum_sequence1(void)
{
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        double j = (double)i;
        sum = sum + 1 / (2 * j - 1);
    }
    printf("%.2lf", sum);
    return 0;
}

/* 
    //1041 通项（-1）^(2n-1)*1/(2n-1)的数列求和

    输入一个整数n，输出和，保留2位
*/
int compute_sum_sequence2(void)
{
    int n;
    double sum = 0.0, flag = 1.0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        double j = (double)i;
        sum = sum + 1 / (2 * j - 1) * flag;
        flag = -flag;
    }
    printf("%.2lf", sum);
    return 0;
}
/*
    高效解法
    sum = 0.0;
    deno = 1.0;
    flag = 1.0;
 
    for(i = 1; i <= n; i++)
    {
        sum += i * flag / deno;
        deno += 2;
        flag = -flag;
    } 
    看到符号交替要想到利用循环取反来利用计算机特性，看到规律增减也是
*/

/* 
    //1042 通项（-1）^(2n-1)*n/(2n-1)

    输入一个整数n，输出和，保留3位
*/
int compute_sum_sequence3(void)
{
    int n;
    double deno = 1.0, sum = 0.0, flag = 1.0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        sum += i / deno * flag;
        deno += 2;
        flag = -flag;
    }
    printf("%.3lf", sum);
    return 0;
}

/* 
    //1045 数值统计

    输入第一个数n表示需统计数据的个数，然后是n个数据，输出负数 零 正数的个数
*/
int statics_value(void)
{
    int n, j, a = 0, b = 0, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &j);
        if (j < 0)
            a++;
        else if (j == 0)
            b++;
        else
            c++;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}
/* 
    我想了一下，这个题本身就是个遍历，再怎么想也是O(n)，就直接写就行了
*/

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/* 
    //1047 对数表

    输入两个整数m和n(m<n)，每行输出一个整数及其对数，整数占4列，对数占8列，右对齐，对数保留4位小数
    输出m到n之间每个整数的自然对数 
    %m.nd中m是数据宽度，不到m左补空格(右对齐，m为负值时左对齐)，超过m原样输出，n是小数位数
    log()是自然对数
*/
int print_list_log(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        printf("%4d%8.4lf\n", i, log(i));
    }
    return 0;
}

/* 
    //1048 阶乘表

    输入一个正整数n<=20，输出1~n之间阶乘表，整数占4列，阶乘占20列，左对齐
    提交时错误：unsigned long long 也没法弄出来20的阶乘，double居然可以
*/
int print_list_factorial(void)
{
    int n;
    double m = 1;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        printf("%-4ld%-20.0lf\n", i, m);
        m *= i + 1;
    }
    return 0;
}

/*
    //1050 计算阶乘累加和

    输入一个整数n<=10，输出阶乘累加结果
*/
int compute_sum_factorial(void)
{
    int n, sum = 0, m = 1;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        sum += m;
        m *= i + 1;
    }
    printf("%d", sum);
    return 0;
}

#ifndef _MATH_H_
#define _MATH_H_
#include <math.h>
#endif
/* 
    //1051 平方根的和

    输入整数item<10000 n<1000，输出和，保留两位
    数列第1项为item，以后各项为前一项的平方根
*/
int compute_sum_sequence4(void)
{
    int item, n;
    double x, sum;
    scanf("%d %d", &item, &n);
    sum = item;
    x = item;
    for (int i = 1; i < n; i++)
    {
        x = sqrt(x);
        sum += x;
    }
    printf("%.2lf", sum);
    return 0;
}

/* 
    //1052 通项a~n~=b(10a~n-1~+1) （通项公式应该成立于n>2时）前n项和

    输入整数n a，输出前n项和
    求a+aa+aaa+…aa…a(n个a)，如当n=3,a=2时，2+22+222的结果为246 
*/
int compute_sum_sequence5(void)
{
    int n, a, sum, m;
    scanf("%d %d", &n, &a);
    sum = 0;
    m = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += m * a;
        m = m * 10 + 1;
    }
    printf("%d", sum);
    return 0;
}

/* 
    //1053 正弦函数
    输入实数x，输出1个实数，保留3位
    sin(x)=x-x^3/3!+x^5/5!-x^7/7!...计算前10项和(double)
*/
int compute_sum_sin_taylor(void)
{
    int i;
    double x, flag, sum, deno, numerator;
    scanf("%lf", &x);
    sum = 0.0;
    deno = 1.0;    //第一项的分母
    numerator = x; //第一项的分子
    flag = 1.0;    //第一项的符号
    for (i = 1; i <= 10; i++)
    {
        sum += numerator * flag / deno;
        //为下一项的计算做准备
        flag = -flag;
        numerator = numerator * x * x;
        deno = deno * (2 * i) * (2 * i + 1);
    }
    printf("%.3f\n", sum);
    return 0;
}

/* 
    //1054 猴子吃桃

    输入数1<n<30，输出第一天桃子数
    每天吃一半零一个,最后剩下一个
*/
int recursion_peach(void)
{
    int n, m = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        m = (m + 1) * 2;
    }
    printf("%d", m);
    return 0;
}

/* 
    //1055 兔子繁殖问题

    输入月数1<n<44，输出多少对兔子
*/
int recursion_fibonacci(void)
{
    int n, a, b, c;
    a = 1;
    b = 1;
    scanf("%d", &n);
    for (int i = 3; i <= n; i++)
    {
        c = a + b; //a  b  c
        a = b;     //a  a' b' c'
        b = c;
    }
    printf("%d", b);
    return 0;
}
/* 
    递归方式实现，经过测试，肉眼可见的速度差距
    int b(void)
    {
    int n;
    scanf("%d",&n);
    printf("%d",a(n));
    return 0;
    }
    int a(int n)
    {
    if(n<=1)return n;
    return a(n-1)+a(n-2);
    }
*/

/* 
    //1056 幸运数字

    输入m<=n<10e9，输出幸运数字
*/
int find_lucky_num(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = 0;
    for (; b >= a; b--)
    {
        if (b % 7 == 0 && b % 4 != 0)
        {
            printf("%d", b);
            c++;
            break;
        }
    }
    if (c == 0)
        printf("no");
    return 0;
}

/* 
    //1058 求解不等式

    输入一个整数n，范围为int，输出m的取值范围m<=number
    不等式1！+2！+3！+...+m！<n   m<=?
    提交时错误：注意输出要求的格式为m<=求出的数字
*/
int compute_inequality(void)
{
    int n, m;
    double sum = 0, a = 1;
    scanf("%d", &n);
    for (m = 1; m <= n; m++)
    {
        sum += a;
        a *= (m + 1);
        if (sum >= (double)n)
        {
            break;
        }
    }
    printf("m<=%d", m - 1);
    return 0;
}

/* 
    //1062 最大公约数

    输入整数m和n
    输出最大公约数
    最小公倍数用两数相乘/最大公约数即可
*/
int compute_common_divisor(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    while (n > 0)
    {
        int t;
        t = m;
        m = n;
        n = t % n;
    }
    printf("%d", m);
    return 0;
}

/* 
    //1067 有问题的里程表

    输入1<num<1000，输出实际里程
    三个数位均遇到4就跳过
*/
int statics_bit_jump(void)
{
    int num, rearly = 0;
    scanf("%d", &num);
    if (num / 100 % 10 >= 4)
    {
        rearly += 100 + ((num / 100 % 10) - 1) * 19;
    }
    else
    {
        rearly += (num / 100 % 10) * 19;
    }

    if (num / 10 % 10 >= 4)
    {
        rearly += 10 + (num / 10 % 10) - 1;
    }
    else
    {
        rearly += (num / 10 % 10);
    }
    if (num % 10 >= 4)
    {
        rearly++;
    }
    printf("%d", num - rearly);
    return 0;
}
/* 
    我的思路是把xxx分离成x00、x10-x99、x00-x10几个部分，分治算法
    即完整的整百部分每个将跳过19个含4的数，遇到400会跳过100个，这里以百位数为4时分界讨论
    讨论后相当于这个数整百的部分判定完毕，当作它其实是2位数，然后用同样的方法继续
    即10-99的部分，每个10将跳过1个含4的数，遇到40会跳过10个，这里以十位数为4时分界讨论
    讨论后可以发现个位只需判断是否大于等于4，大于等于4再跳一个，就完成全部讨论

    有同学的做法是用了遍历，但是如果测试范围简单的比1000大上几个数量级就又要回来想这个问题了

    //简单的打印一张表看看情况
    int b()
    {
    for (int i = 1; i < 300; i++)
    {
        if (i % 10 == 4)
        {
        }
        else if (i / 10 % 10 == 4)
        {
        }
        else
        {
            printf("%d", i);
        }
        printf("\t");
    }
    return 0;
    }
*/

/* 
    //1068 二进制数

    输入一个二进制数，以回车结束，输出一个整数，为对应十进制数
    利用秦九韶算法f(x) =(( (a0*x + a1)*x + a2) * x + ... an-1) * x + an
*/
int compute_binary_conversion(void)
{
    int d = 0;
    char ch;
    while (ch = getchar(), ch != '\n')
    {
        d = d * 2 + (ch - '0');
    }
    printf("%d", d);
    return 0;
}

/* 
    //1069 向z同学学习

    输入：两个整数2 <= k <= M <= 1000
    输出：一个整数
    题目：每天花1元，每花k元可以再得1元，开始有M元，可坚持几天？
    这个题肯定要循环，因为M足够大时奖励的钱还得再奖励一次，不能简单计算出来
    所以有点像两层步进不同的循环，这个题的逻辑不复杂可以用一层，如果两个逻辑都很复杂可能没法
*/
int compute_cycle(void)
{
    int M, k, day = 0;
    scanf("%d %d", &M, &k);
    while (M > 0)
    {
        if (M < k)
        {
            day += M;
            break;
        }
        else
        {
            day += k;
        }
        M = M - k + 1;
    }
    printf("%d", day);
    return 0;
}

/* 
    //1070 小汽车位置

    输入：多个命令，每个命令由整数time和1<command<3组成，每行列一项，表示time时刻发出命令command
    输出：占一行，两个整数，表示坐标
    题目：速度为10，初始向y轴正方向，坐标(0,0)，1为向左转，2为向右转，3为停止，最后命令一定是停止
    分析：1.输入的命令数量可能是任意的，需要用scanf返回值特性循环读取格式串，Windows下退出这种设计下的输入状态
          需要先输一个回车，按ctrl+z，再输一个回车，Linux直接ctrl+d
          2.为了解决多次转向的问题，把每次的转向统一执行到oriation变量上，用其值为0，1，2，3来代表上下左右4个方向
          这里就需要一个模为4的设计，我不确定二进制位操作能否具备足够的通用性，所以设计成十进制实现：计算后取余或者
          先加模再计算再取余，如果操作数比模大可能还要多处理一步
          3.循环中的状态处理要设计好防止逻辑漏洞
*/
int control_car_position(void)
{
    int time=0,oriation=0,x=0,y=0,t,command;
    while(scanf("%d\n%d",&t,&command)!=1)
    {

        if(command==3)
        {
            int a=t;
            t=t-time;
            time=a;
            switch(oriation)
            {
            case 0:y+=10*t;break;
            case 1:x-=10*t;break;
            case 2:y-=10*t;break;
            case 3:x+=10*t;break;
            default:break;
            } 
            break;
        }
        int a=t;
        t=t-time;
        time=a;
        switch(oriation)
        {
            case 0:y+=10*t;break;
            case 1:x-=10*t;break;
            case 2:y-=10*t;break;
            case 3:x+=10*t;break;
            default:break;
        } 
        if(command==1)
        {
            oriation=(oriation+1)%4;
        }
        else
        {
            oriation=(oriation+3)%4;
        }               
    }
    printf("%d %d",x,y);
    return 0;
}