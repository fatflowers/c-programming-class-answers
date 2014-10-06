/*
编写程序利用数学函数计算 y 值。其中： 
                y = |x|            x 为任意实数

输入要求：无  

输出要求： 结果精确到小数点后两位

输入输出样例：
Input Sample: 

-1

Output Sample:

|y|=1.00
*/

#include<stdio.h>
#include<math.h>
int main(){
    float y;
    scanf("%f",&y);
    printf("|y|=%.2f",fabs(y));
    return 0;
}