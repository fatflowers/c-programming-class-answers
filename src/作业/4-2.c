#include<stdio.h>
/*
���� while ѭ�����ͳ�������һ�����ַ��ĸ�����

[������ʾ:]


ͨ��getchar()��ȡ�ַ�����������ַ��ǻ��з�ʱѭ��������
*/
int main(){
    char ch;
    int count=0;
  
    while((getchar())!='\n'){
        count++;
    }

    printf("%d",count);
  
    return 0;
}