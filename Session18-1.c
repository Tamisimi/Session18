#include <stdio.h>

struct Student {
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;

    printf("Nhap ten sinh vien: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0';  

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &student1.age);
    getchar(); 

    printf("Nhap so dien thoai: ");
    fgets(student1.phoneNumber, sizeof(student1.phoneNumber), stdin);
    student1.phoneNumber[strcspn(student1.phoneNumber, "\n")] = '\0';
	 
    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s\n", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("So dien thoai: %s\n", student1.phoneNumber);

    return 0;
}

