#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

void countdown_timer(int t) {
    while (t) {
        int mins = t / 60;
        int sec = t % 60;
        
        printf("%02d:%02d\n", mins, sec);
        
        sleep(1);
        t--;
    }
    printf("Time's Up!\n");
}

int main() {
    int t;

    while (1) {
        printf("Enter the time in seconds: ");
        if (scanf("%d", &t) != 1 || t < 0) {
            printf("Invalid Input! Please enter a positive integer.\n");
            while (getchar() != '\n');
            continue;
        }
        countdown_timer(t);
        break;
    }

    return 0;
}

