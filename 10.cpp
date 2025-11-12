#include <stdio.h>

int main() {
    char str[] = "bcdac";
    int i, j;
    int count;
    int daDem[256] = {0};  // Mảng đánh dấu ký tự đã đếm

    for (i = 0; str[i] != '\0'; i++) {
        if (daDem[(unsigned char)str[i]] == 0) {  // nếu ký tự chưa đếm
            count = 1;
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[j] == str[i]) {
                    count++;
                }
            }
            printf("%c: %d\n", str[i], count);
            daDem[(unsigned char)str[i]] = 1;  // đánh dấu đã đếm
        }
    }

    return 0;
}
