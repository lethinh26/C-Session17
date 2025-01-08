#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    char phone[10];
};

int main() {
    struct Student s = {"Le Phu Thinh", 18, "039834907"};
    printf("Ho ten: %s\n", s.name);
    printf("Tuoi: %d\n", s.age);
    printf("SDT: %s\n", s.phone);

}
