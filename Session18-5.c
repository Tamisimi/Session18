#include <stdio.h>

struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50] = {
        {1, "Nguyen Thi Lan", 20, "0123456789"},
        {2, "Le Minh Tuan", 22, "0987654321"},
        {3, "Tran Bao Ngoc", 19, "0912345678"},
        {4, "Hoang Anh Kiet", 21, "0934567890"},
        {5, "Phan Thi Mai", 23, "0945678901"}
    };

    int searchId, found = 0;

    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);
    getchar();  

    for (int i = 0; i < 5; i++) {
        if (students[i].id == searchId) {
            found = 1;
            printf("Sinh vien tim thay: %s, Tuoi: %d, So dien thoai: %s\n", students[i].name, students[i].age, students[i].phoneNumber);
            
            printf("Nhap ten moi cho sinh vien: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';  

            printf("Nhap tuoi moi cho sinh vien: ");
            scanf("%d", &students[i].age);
            getchar();  

            printf("Thong tin sinh vien sau khi sua:\n");
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s\n", students[i].phoneNumber);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi ID %d.\n", searchId);
    }

    printf("\nThong tin toan bo sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

