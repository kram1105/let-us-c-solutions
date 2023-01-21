#include <stdio.h>
#include <string.h>

int main() {
    char gender[20];
    printf("Enter the gender of the person, male or female\n");
    scanf("%s", gender);

    int age;
    printf("Enter the age of the person\n");
    scanf("%d", &age);

    char health[20];
    printf("Enter your health condition as excellent or poor\n");
    scanf("%s", health);

    char place[20];
    printf("Enter the place of living as city or village\n");
    scanf("%s", place);
    
    int premium;
    if ((strcmp("male", gender) == 0) && (age >= 25 && age <= 35) && (strcmp("city", place) == 0) && (strcmp("excellent", health) == 0)) {
        premium = (200000 * 4) / 1000;
        printf("Person is insured\n");
        printf("The premium amount is %d\n", premium);
        printf("The maximum insured amount is 200000\n");
    } else if ((strcmp("female", gender) == 0) && (age >= 25 && age <= 35) && (strcmp("city", place) == 0) && (strcmp("excellent", health) == 0)) {
        premium = (100000 * 3) / 1000;
        printf("Person is insured\n");
        printf("The premium amount is %d\n", premium);
        printf("The maximum insured amount is 100000\n");
    } else if ((strcmp("male", gender) == 0) && (age >= 25 && age <= 35) && (strcmp("village", place) == 0) && (strcmp("poor", health) == 0)) {
        premium = (10000 * 6) / 1000;
        printf("Person is insured\n");
        printf("The premium amount is %d\n", premium);
        printf("The maximum insured amount is 10000\n");
    } else {
        printf("Person is not insured\n");
    }
}

// Sample Input and Output

// Enter the gender of the person, male or female
// male
// Enter the age of the person
// 26
// Enter your health condition as excellent or poor
// excellent
// Enter the place of living as city or village
// city
// Person is insured
// The premium amount is 800
// The maximum insured amount is 200000

// Enter the gender of the person, male or female
// female
// Enter the age of the person
// 25
// Enter your health condition as excellent or poor
// excellent
// Enter the place of living as city or village
// city
// Person is insured
// The premium amount is 300
// The maximum insured amount is 100000

// Enter the gender of the person, male or female
// male
// Enter the age of the person
// 26
// Enter your health condition as excellent or poor
// poor
// Enter the place of living as city or village
// village
// Person is insured
// The premium amount is 60
// The maximum insured amount is 10000