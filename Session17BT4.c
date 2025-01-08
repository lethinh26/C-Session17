#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
    char phoneNumber[10];
};

int main() {
    struct Student s[50];
    for (int i = 0; i < 5; i++) {
        s[i].id = i+1;
        printf("Nhap ho ten sv %d: ", i+1); 
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strlen(s[i].name)-1] = '\0'; 
        printf("Nhap tuoi sv %d: ", i+1);
        scanf(" %d", &s[i].age);
        while(getchar() != '\n');
        printf("Nhap so dien thoai sv %d: ", i+1);
        fgets(s[i].phoneNumber, sizeof(s[i].phoneNumber), stdin);
        s[i].phoneNumber[strlen(s[i].phoneNumber)-1] = '\0';
    }

    for (int i = 0; i < 5; i++) {
        printf("ID sv %d: %d\n", i+1, s[i].id);
        printf("Ho ten sv %d: %s\n", i+1, s[i].name);
        printf("Tuoi sv %d: %d\n", i+1, s[i].age);
        printf("SDT sv %d: %s\n", i+1, s[i].phoneNumber);
        printf("\n");
    }
}