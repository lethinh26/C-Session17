#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
    char phoneNumber[10];
};

int main() {
    struct Student s[50] = {
        1, "Le Phu Thinh", 18, "0218565273", 
        2, "Nguyen Van A", 19, "0290572905",
        3, "Nguyen Van B", 20, "0218256273",
        4, "Nguyen Van C", 21, "0218256273",
        5, "Nguyen Van D", 22, "0218256273"};
    int current = 5;

    s[current].id = current+1;
    printf("Nhap ho ten sv can them: "); 
    fgets(s[current].name, sizeof(s[current].name), stdin);
    s[current].name[strlen(s[current].name)-1] = '\0'; 
    printf("Nhap tuoi sv can them: ");
    scanf(" %d", &s[current].age);
    while(getchar() != '\n');
    printf("Nhap so dien thoai sv can them: ");
    fgets(s[current].phoneNumber, sizeof(s[current].phoneNumber), stdin);
    s[current].phoneNumber[strlen(s[current].phoneNumber)-1] = '\0';
    current++;
    

    for (int i = 0; i < current; i++) {
        printf("ID sv %d: %d\n", i+1, s[i].id);
        printf("Ho ten sv %d: %s\n", i+1, s[i].name);
        printf("Tuoi sv %d: %d\n", i+1, s[i].age);
        printf("SDT sv %d: %s\n", i+1, s[i].phoneNumber);
        printf("\n");
    }



    return 0;
}