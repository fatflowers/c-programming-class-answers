/*
��д����������ѧ�������� y ֵ�����У� 
                y = |x|            x Ϊ����ʵ��

����Ҫ����  

���Ҫ�� �����ȷ��С�������λ

�������������
Input Sample: 

-1

Output Sample:

|y|=1.00
*/

#include<stdio.h>
#include<math.h>
int main(){
    float y;
    scanf("%f",&y);
    printf("|y|=%.2f",fabs(y));
    return 0;
}