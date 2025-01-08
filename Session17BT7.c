#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
    char phoneNumber[10];
};

void removeStudent(struct Student *s, char find[], int *current);

int main() {
    struct Student s[50] = {
        1, "Le Phu Thinh", 18, "0218565273", 
        2, "Nguyen Van A", 19, "0290572905",
        3, "Nguyen Van B", 20, "0218256273",
        4, "Nguyen Van C", 21, "0218256273",
        5, "Nguyen Van D", 22, "0218256273"};
    int current = 5;
    char find[20];
    printf("Nhap ten sinh vien ban muon xoa: ");
    fgets(find, 20, stdin);
    find[strlen(find)-1] = '\0';

    removeStudent(s, find, &current);
    for (int i = 0; i < current; i++) {
        printf("ID sv %d: %d\n", i+1, s[i].id);
        printf("Ho ten sv %d: %s\n", i+1, s[i].name);
        printf("Tuoi sv %d: %d\n", i+1, s[i].age);
        printf("SDT sv %d: %s\n", i+1, s[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

void removeStudent(struct Student *s, char find[], int *current) {
    for (int i = 0; i < *current; i++) {
        if (strcmp(s[i].name, find) == 0) {
            for (int j = i; j < *current - 1; j++) {
                s[j] = s[j + 1];
            }
            (*current)--;
            return; 
        }
    }
    printf("Khong tim thay sinh vien\n");
    return;
}