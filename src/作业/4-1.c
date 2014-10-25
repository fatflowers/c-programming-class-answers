#include<stdio.h>
/* 从键盘键入任意一个字符，判断是大小写英文字母、数字、空格还是其它字符。r若键入字母，则屏幕显示：It is an English character. ；若键入数字则屏幕显示：It is a digit character. ；若键入空格则屏幕显示：It is a space character. ；若输入其它字符，则屏幕显示：It is other character. 。以上四种情况请分别给出测试用例。*/
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


