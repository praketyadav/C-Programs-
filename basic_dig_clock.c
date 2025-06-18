#include <stdio.h>
#include <time.h>
#include <unistd.h> // for sleep()

int main() {
    int h = 0, m = 0, s = 0;

    printf("Simple Digital Clock Simulation\n");
    printf("Starts at 00:00:00\n\n");

    while (1) {
        printf("\r%02d:%02d:%02d", h, m, s); // overwrite line
        fflush(stdout);
        sleep(1); // wait for 1 second
        s++;
        if (s == 60) {
            s = 0;
            m++;
        }
        if (m == 60) {
            m = 0;
            h++;
        }
        if (h == 24) {
            h = 0;
        }
    }

    return 0;
}
