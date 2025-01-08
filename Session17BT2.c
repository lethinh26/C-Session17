#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    char phoneNumber[10];
};

int main() {
    struct Student s;
    printf("Nhap ho ten: ");
    fgets(s.name, sizeof(s.name), stdin); 
    printf("Nhap tuoi: ");
    scanf(" %d", &s.age);
    while (getchar() != '\n');
    printf("Nhap so dien thoai: ");
    fgets(s.phoneNumber, sizeof(s.phoneNumber), stdin);
    printf("Ho ten: %s\n", s.name);
    printf("Tuoi: %d\n", s.age);
    printf("SDT: %s\n", s.phoneNumber);
}
