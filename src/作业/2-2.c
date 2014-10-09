/*
任务说明： 编程从键盘输入圆的半径r，计算并输出圆的周长和面积

输入要求： 半径r可能为非整数

输出要求： 先输出周长再输出面积，结果精确到小数点后两位

输入输出样例：
Input Sample:

1

Output Sample:

circum=6.28 area=3.14


注：PI值取3.14
*/

#include<stdio.h>    
#define PI 3.14
int main(){
    float r;
  
    scanf("%f",&r);
    printf("circum=%.2f area=%.2f",2*PI*r,PI*r*r);

    return 0;
}