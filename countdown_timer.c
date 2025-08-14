#include <stdio.h>
#include <unistd.h> // for sleep()

int main() {
    int seconds;
    printf("Enter countdown seconds: ");
    scanf("%d", &seconds);

    for (int i = seconds; i > 0; i--) {
        printf("%d...\n", i);
        sleep(1);
    }
    printf("Time's up! ⏰\n");
    return 0;
}
