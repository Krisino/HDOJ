#include <stdio.h>

int main() {
    int n, i;
    int num[100], n1, n2, temp;//n1�ϴ�����n2��С��
    while (~scanf("%d", &n)) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num[j]);
        }
        for (i = 0; i < n - 1; i++) {
            n1 = num[i];
            n2 = num[i + 1];
            // շת������ô�ĳ���С�ġ����n1<n2����һ���൱n1��n2ֵ����
            while (n1 % n2 != 0) {
                temp = n1 % n2;
                n1 = n2;
                n2 = temp;
            }
            num[i + 1] = num[i] / n2* num[i + 1];//����С������
        }
        printf("%d\n", num[i]);
    }
    return 0;
}
