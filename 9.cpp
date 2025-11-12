#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i, j;

    printf("Chuoi ban dau:", str);
    fgets(str, sizeof(str),stdin);
    printf("Nhap ky tu muon xoa: ");
    scanf("%c", &ch);

    // Duyệt chuỗi
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j] = str[i]; // giữ ký tự không phải ký tự cần xóa
            j++;
        }
    }
    str[j] = '\0'; // kết thúc chuỗi mới

    printf("Chuoi sau khi xoa '%c': %s\n", ch, str);

    return 0;
}
