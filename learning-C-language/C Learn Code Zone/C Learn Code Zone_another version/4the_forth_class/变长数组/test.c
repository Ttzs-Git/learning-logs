#include <stdio.h>
int main()
{
    //支持变长数组的编译器上，数组的大小可以是变量
    int n = 0;
    scanf("%d",&n);
    int arr[n];//这个数组不能初始化
    //n改变后，无法改变arr大小 
    int i= 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
//编辑器
//配置插件、实现编译的效果
