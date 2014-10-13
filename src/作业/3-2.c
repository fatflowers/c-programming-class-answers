/*************************************************************************
    > File Name: 3-2.c
    > Author: Sunlei
    > Mail: sunleihit@qq.com 
    > Created Time: 2014年10月09日 星期四 19时30分23秒
 ************************************************************************/

/*
 *任务说明书：

 编写具有以下功能的程序。要求用户输入天数，然后将该值转换为该天数所对应周数和天数。例如，输入18，程序把18天转换为2周4天。
 输入要求：整型数据

 输出要求：

 xx days are x weeks,x days.

 其中：红颜色字体为输入的天数，蓝颜色字体为计算得到的周数和天数

 输入输出样例：
 Input Sample: 

 18

 Output Sample:

 18 days are 2 weeks,4 days.
 * */

#include<stdio.h>

int main(){
    int ndays;

    scanf("%d", &ndays);
    // 如果输入的是非负数，则正常处理，否则返回-1，代表错误
    if(ndays >= 0){
        printf("%d days are %d weeks,%d days.\n", ndays, ndays / 7, ndays % 7);
    }
    else{
        return -1;
    }

    return 0;
}
