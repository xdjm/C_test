#include <stdio.h>
void main() {
    int i,t,a[5];
    //初始化数组
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    //将数组倒序
    for(i=0;i<=1;i++){
        t= a[4-i];
        a[4-i]=a[i];
        a[i]=t;
    }
    //输出数组
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
    }
}