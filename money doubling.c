#include <stdio.h>

int main() {
    int money = 10;
    char answer;

    printf("Do you want to take %d dollars? (y/n)\n", money);

    while (1) {
        scanf(" %c", &answer);

        if (answer == 'y') {
            printf("Here is %d dollars.\n", money);
            break;
        }
        else if (answer == 'n') {
            money *= 2;
            printf("I'll ask another person.\nDo you want to take %d dollars? (y/n)\n", money);
        }
        else {
            printf("Error: Invalid input. Please enter only 'y' or 'n'.\n");
            break;
        }
    }

    return 0;
}