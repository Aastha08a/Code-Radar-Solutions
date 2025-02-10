#include <stdio.h>

int main() {
    int age;
    char name[77];
    char hobby[88];

    scanf("%s %d %s",&name,&age,&hobby);

    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);

    return 0;
}