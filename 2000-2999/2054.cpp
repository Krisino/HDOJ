#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void del_0_after_point(char *s)
{
   int len = strlen(s);
   char *p = s + len - 1;   // �������һλ
   if(strchr(s, '.'))       // �ж��Ƿ����С����
        while(*p == '0')    // ���һλ�����0�ʹ��ַ�����ɾ��
            *p-- = '\0';    // ָ��ָ��ǰһλ����
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
