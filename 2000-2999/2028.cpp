#include <stdio.h>

int main() {
    int n, i;
    int num[100], n1, n2, temp;//n1较大数，n2较小数
    while (~scanf("%d", &n)) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num[j]);
        }
        for (i = 0; i < n - 1; i++) {
            n1 = num[i];
            n2 = num[i + 1];
            // 辗转相除是用大的除以小的。如果n1<n2，第一次相当n1与n2值交换
            while (n1 % n2 != 0) {
                temp = n1 % n2;
                n1 = n2;
                n2 = temp;
            }
            num[i + 1] = num[i] / n2* num[i + 1];//求最小公倍数
        }
        printf("%d\n", num[i]);
    }
    return 0;
}
