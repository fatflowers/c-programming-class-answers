#include<stdio.h>     
/*
����˵���飺
���� while ѭ���� else if ���֧�ṹ��дһ�����򡣸ó�������ͳ�������һ���ַ��д�Сд��ĸ�ĸ���������0~9�ĸ������ո�����������ַ����������磺��ͨ���������룺aldkfjQWEklj12 FDA FK*������Ļ����������ʾ��

English character is:17

Digit character is:2

Space character is:2

Other character is:1
*/
int main()
{

	char ch;     
	/*Ϊ����������ֵ*/	
	int English=0, 
		Digit=0, 
		Space=0, 
		Other=0;

	/*ʹ�û����������ַ�*/
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
