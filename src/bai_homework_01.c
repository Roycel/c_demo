#include<stdio.h>

int test[150]={
1,2,3,4,5,6,7,8,9,10,
11,12,13,14,15,16,17,18,19,20,
21,22,23,24,25,26,27,28,29,30,
31,32,33,34,35,36,37,38,39,40,
41,42,43,44,45,46,47,48,49,50,
51,52,53,54,55,56,57,58,59,60,
61,62,63,64,65,66,67,68,69,70,
71,72,73,74,75,76,77,78,79,80,
81,82,83,84,85,86,87,88,89,90,
91,92,93,94,95,96,97,98,99,100,
101,102,103,104,105,106,107,108,109,110,
111,112,113,114,115,116,117,118,119,120,
121,122,123,124,125,126,127,128,129,130,
131,132,133,134,135,136,137,138,139,140,
141,142,143,144,145,146,147,148,149,150};


int main()
{
    SearchArray();

    system("pause");
    return 0;
         
}
int SearchArray()//搜索
{
    int a,b;
    printf("enter the number need searching\n");
    scanf("%d",&a);
    b=SearchArrayHandler(a);
    if(b+1)
        printf("the element subscript is  %d\n",b);
    else 
        OddJudge(a);

    return 0;    
}
int SearchArrayHandler(int a)//搜索处理
{
    int len=150;
    int left=0,right=len-1,mid;
    if(a==test[right])
       return right;
    else if(a>test[right])
            return  -1;
         else if(a<test[left])
                 return -1;
    while(left<right)
    {
      mid=(right+left)>>1;
      if(a==test[mid])
         return mid;
      else if(a<test[mid])
              right=mid-1;
           else
              left=mid+1;
    }
    return left;
}
int OddJudge(int a)//奇偶判断
{
   if(a&0x01)
   printf("the number is odd\n");
   else 
   printf("the number is even\n");
    return  0;
}
