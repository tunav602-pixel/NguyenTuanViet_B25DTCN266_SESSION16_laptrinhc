#include <stdio.h>

int main() {
    char str[] = "lap trinh c rat vui"; // chuỗi đã khai báo
    int i;

    // Xử lý ký tự đầu tiên
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A';  // viết hoa ký tự đầu tiên
    }

    // Duyệt các ký tự còn lại
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i-1] == ' ' && (str[i] >= 'a' && str[i] <= 'z')) {
            // Nếu ký tự trước là khoảng trắng và ký tự hiện tại là chữ thường
            str[i] = str[i] - 'a' + 'A';  // viết hoa
        }
    }

    printf("Chuoi sau khi viet hoa dau moi tu: %s\n", str);

    return 0;
}
