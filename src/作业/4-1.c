#include<stdio.h>
/* �Ӽ��̼�������һ���ַ����ж��Ǵ�СдӢ����ĸ�����֡��ո��������ַ���r��������ĸ������Ļ��ʾ��It is an English character. ����������������Ļ��ʾ��It is a digit character. ��������ո�����Ļ��ʾ��It is a space character. �������������ַ�������Ļ��ʾ��It is other character. ���������������ֱ��������������*/
int main(){

	char ch;
	scanf("%c", &ch);

	if (ch>='A' && ch<= 'Z' || ch>='a' && ch<='z')
        printf("It is an English character.\n");  
	else if(ch>='0' && ch<='9')
        printf("It is a digit character.\n");
	else if(ch==' ')
        printf("It is a space character.\n");
    else
        printf("It is other character.\n");
		
    return 0;
}


