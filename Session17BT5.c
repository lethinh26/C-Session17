#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
    char phoneNumber[10];
};

int main() {
    struct Student s[5] = {
        1, "Le Phu Thinh", 18, "0218565273", 
        2, "Nguyen Van A", 19, "0290572905",
        3, "Nguyen Van B", 20, "0218256273",
        4, "Nguyen Van C", 21, "0218256273",
        5, "Nguyen Van D", 22, "0218256273"};
    int id;
    printf("Nhap ma so sinh vien ban muon tim kiem: ");
    scanf("%d", &id);
    while(getchar() != '\n');
    int check = 0;
    for (int i = 0; i < 5; i++){
        if (s[i].id == id) {
            check = 1;
            break;
        }
    }
    if (check) {
        printf("Nhap ten moi cua sv %d: ", id);
        fgets(s[id-1].name, sizeof(s[id-1].name), stdin);
        s[id-1].name[strlen(s[id-1].name)-1] = '\0';
        printf("Nhap tuoi moi cua sv %d: ", id);
        scanf("%d", &s[id-1].age);

        for (int i = 0; i < 5; i++) {
            printf("ID sv %d: %d\n", i+1, s[i].id);
            printf("Ho ten sv %d: %s\n", i+1, s[i].name);
            printf("Tuoi sv %d: %d\n", i+1, s[i].age);
            printf("SDT sv %d: %s\n", i+1, s[i].phoneNumber);
            printf("\n");
        }
    }else {
        printf("Sinh vien ko ton tai");
    }


    return 0;
}