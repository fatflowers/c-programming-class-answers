/*
任务说明：
编程在屏幕上显示一个数及这个数的平方和这个数的立方。 （定义一个变量a，这个变量存放这个数2）。可按如下两种方式之一显示 
① 
a=2 a*a=4 a*a*a=8 
或② 
a=2,a*a=4,a*a*a=8 

输入要求：无
输出要求：见“输入输出样例”

输入输出样例：
Input Sample1: 

Output Sample1:
a=2 a*a=4 a*a*a=8

Input Sample2: 

Output Sample2:
a=2,a*a=4,a*a*a=8
*/

#include<stdio.h>     /*计算一个数的平方和立方*/
int main(){
    int n;
    n=2;
    printf("a=%d", n);
    n *= 2;
    printf(",a*a=%d", n);
    n *= 2;
    printf(",a*a*a=%d\n", n);

    return 0;
}