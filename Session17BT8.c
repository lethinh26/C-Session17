#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
    char phoneNumber[10];
};

void insertStudent(struct Student *s, int pos, int *current);

int main() {
    struct Student s[50] = {
        1, "Le Phu Thinh", 18, "0218565273", 
        2, "Nguyen Van A", 19, "0290572905",
        3, "Nguyen Van B", 20, "0218256273",
        4, "Nguyen Van C", 21, "0218256273",
        5, "Nguyen Van D", 22, "0218256273"};
    int current = 5;
    int pos;
    printf("Nhap vi tri ban muon chen: ");
    scanf("%d", &pos);
    while(getchar() != '\n');
    insertStudent(s, pos, &current);
    for (int i = 0; i < current; i++) {
        printf("ID sv %d: %d\n", i+1, s[i].id);
        printf("Ho ten sv %d: %s\n", i+1, s[i].name);
        printf("Tuoi sv %d: %d\n", i+1, s[i].age);
        printf("SDT sv %d: %s\n", i+1, s[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

void insertStudent(struct Student *s, int pos, int *current) {
    for (int i = *current; i > pos; i--) {
        s[i] = s[i-1];
    }
    (*current)++;
    s[pos].id = pos;
    printf("Nhap ho ten sv %d: ", pos); 
    fgets(s[pos].name, sizeof(s[pos].name), stdin);
    s[pos].name[strlen(s[pos].name)-1] = '\0'; 
    printf("Nhap tuoi sv %d: ", pos);
    scanf(" %d", &s[pos].age);
    while(getchar() != '\n');
    printf("Nhap so dien thoai sv %d: ", pos);
    fgets(s[pos].phoneNumber, sizeof(s[pos].phoneNumber), stdin);
    s[pos].phoneNumber[strlen(s[pos].phoneNumber)-1] = '\0';

    for (int i = pos; i < *current; i++){
        s[i].id++;
    }
    return;
}