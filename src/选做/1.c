/*************************************************************************
    > File Name: 1.c
    > Author: Sunlei
    > Mail: sunleihit@qq.com 
    > Created Time: 2014年10月10日 星期五 19时25分20秒
 ************************************************************************/
/*
 *任务说明书：

 从键盘输入任意一个整数N（10≤N≤99），编程将该整数按逆序打印输出。

 输入要求："%d" 
 
 输出要求： 见输出样例
 
 输入输出样例：
 
 Input Sample ① :
 
 27
 
 Output Sample ① :
 
 Please enter a 2 digit number:
 
 Inverse number this number is:72
 
 Input Sample ② :
 
 69
 
 Output Sample ② :
 
 Please enter a 2 digit number:
 
 Inverse number this number is:96
 * */
#include<stdio.h>

int main(){
	int number;
	printf("Please enter a 2 digit number:");
	scanf("%d", &number);
	printf("Inverse number this number is:%d%d\n", number % 10, number / 10);
	
	return 0;
}

