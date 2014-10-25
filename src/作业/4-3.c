#include<stdio.h>     
/*
任务说明书：
利用 while 循环和 else if 多分支结构编写一个程序。该程序用来统计输入的一行字符中大小写字母的个数、数字0~9的个数、空格个数及其它字符个数。例如：若通过键盘输入：aldkfjQWEklj12 FDA FK*。则屏幕将分四行显示：

English character is:17

Digit character is:2

Space character is:2

Other character is:1
*/
int main()
{

	char ch;     
	/*为计数器赋初值*/	
	int English=0, 
		Digit=0, 
		Space=0, 
		Other=0;

	/*使用户不断输入字符*/
	while((ch=getchar())!='\n'){
		if(ch>='A' && ch<= 'Z' || ch>='a' && ch<='z')
			English++;
		else if(ch>='0' && ch<='9')
			Digit++;
		else if(ch==' ')
			Space++;
		else
			Other++;
	}

	printf("English character is:%d\n"
		"Digit character is:%d\n"
		"Space character is:%d\n"
		"Other character is:%d\n",
		English, Digit, Space, Other);

	return 0;
}
