/*
����˵���� ��̴Ӽ�������Բ�İ뾶r�����㲢���Բ���ܳ������

����Ҫ�� �뾶r����Ϊ������

���Ҫ�� ������ܳ����������������ȷ��С�������λ

�������������
Input Sample:

1

Output Sample:

circum=6.28 area=3.14


ע��PIֵȡ3.14
*/

#include<stdio.h>    
#define PI 3.14
int main(){
    float r;
  
    scanf("%f",&r);
    printf("circum=%.2f area=%.2f",2*PI*r,PI*r*r);

    return 0;
}