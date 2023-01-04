#include<stdio.h>

int main() {
    int ramAge, shyamAge, ajayAge;
    printf("Enter Ram, Shyam and Ajay Age\n");
    scanf("%d%d%d", &ramAge, &shyamAge, &ajayAge);
    if (ramAge < shyamAge && ramAge < ajayAge) {
        printf("Ram is youngest");
    } else if (shyamAge < ramAge && shyamAge < ajayAge) {
        printf("Shyam is youngest");
    } else if (ajayAge < shyamAge && ajayAge < ramAge) {
        printf("Ajay is youngest");
    } else {
        printf("Two or more person have same age. Please give distinct age.");
    }
}