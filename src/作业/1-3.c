/*
����˵����
�������Ļ����ʾһ�������������ƽ����������������� ������һ������a�����������������2�����ɰ��������ַ�ʽ֮һ��ʾ 
�� 
a=2 a*a=4 a*a*a=8 
��� 
a=2,a*a=4,a*a*a=8 

����Ҫ����
���Ҫ�󣺼����������������

�������������
Input Sample1: 

Output Sample1:
a=2 a*a=4 a*a*a=8

Input Sample2: 

Output Sample2:
a=2,a*a=4,a*a*a=8
*/

#include<stdio.h>     /*����һ������ƽ��������*/
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