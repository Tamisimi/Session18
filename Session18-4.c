#include <stdio.h>

struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];
    
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1;
        
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        
        printf("Nhap ten sinh vien: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &students[i].age);
        getchar();
        
        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0';
        
        printf("\n");
    }

    printf("\nThong tin cua 5 sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}


