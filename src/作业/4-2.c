#include<stdio.h>
/*
利用 while 循环编程统计输入的一行中字符的个数。

[友情提示:]


通过getchar()读取字符，当读入的字符是换行符时循环结束。
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