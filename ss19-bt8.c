#include <stdio.h>
#include <string.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void sapXepSinhVien(struct SinhVien sv1[], int n) {
    struct SinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sv1[i].name, sv1[j].name) > 0) {
                temp = sv1[i];
                sv1[i] = sv1[j];
                sv1[j] = temp;
            }
        }
    }
}
int main() {
    struct SinhVien sv1[5] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0123456788"},
        {3, "Tran Van C", 22, "0123456787"},
        {4, "Pham Thi D", 23, "0123456786"},
        {5, "Hoang Van E", 24, "0123456785"}
    };
    int n = 5;
    printf("Thong tin cac sinh vien truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv1[i].id);
        printf("Ten: %s\n", sv1[i].name);
        printf("Tuoi: %d\n", sv1[i].age);
        printf("So dien thoai: %s\n\n", sv1[i].phoneNumber);
    }
    sapXepSinhVien(sv1, n);
    printf("Thong tin cac sinh vien sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv1[i].id);
        printf("Ten: %s\n", sv1[i].name);
        printf("Tuoi: %d\n", sv1[i].age);
        printf("So dien thoai: %s\n\n", sv1[i].phoneNumber);
    }

    return 0;
}

