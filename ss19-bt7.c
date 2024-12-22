#include <stdio.h>
#include <string.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void xoaSinhVien(struct SinhVien sv1[], int *currentLength, int id) {
    int found = 0;
    for (int i = 0; i < *currentLength; i++) {
        if (sv1[i].id == id) {
            found = 1;
            for (int j = i; j < *currentLength - 1; j++) {
                sv1[j] = sv1[j + 1];
            }
            (*currentLength)--;
            break;
        }
    }
    if (!found) {
        printf("Sinh vien voi ID %d khong ton tai.\n", id);
    }
}
int main() {
    struct SinhVien sv1[5] = {
        {1, "Nguyen Van A", 18, "0123456789"},
        {2, "Le Thi Thu Hoai", 18, "0123456788"},
        {3, "Tran Van Dinh", 19, "0123456787"},
        {4, "Pham Thi Dung", 20, "0123456786"},
        {5, "Hoang Van Van", 21, "0123456785"}
    };
    int currentLength = 5;
    printf("Thong tin cac sinh vien truoc khi xoa:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d\n", sv1[i].id);
        printf("Ten: %s\n", sv1[i].name);
        printf("Tuoi: %d\n", sv1[i].age);
        printf("So dien thoai: %s\n\n", sv1[i].phoneNumber);
    }
    int del_id;
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &del_id);
    xoaSinhVien(sv1, &currentLength, del_id);
    printf("\nThong tin cac sinh vien sau khi xoa:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d\n", sv1[i].id);
        printf("Ten: %s\n", sv1[i].name);
        printf("Tuoi: %d\n", sv1[i].age);
        printf("So dien thoai: %s\n\n", sv1[i].phoneNumber);
    }

    return 0;
}

