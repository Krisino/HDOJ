#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void del_0_after_point(char *s)
{
   int len = strlen(s);
   char *p = s + len - 1;   // 数字最后一位
   if(strchr(s, '.'))       // 判断是否存在小数点
        while(*p == '0')    // 最后一位如果是0就从字符串中删除
            *p-- = '\0';    // 指针指向前一位数字
   if(*p == '.')
        *p = '\0';
}
int main()
{ 
    char a[100000], b[100000];
    while(~scanf("%s%s", a, b))
    {
        del_0_after_point(a);
        del_0_after_point(b);
        puts(strcmp(a, b) == 0?"YES":"NO");
    }
    system("pause");
    return 0;
}
