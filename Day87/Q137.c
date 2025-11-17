//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>
enum Colors {RED, YELLOW, GREEN};
int main() {
    enum Colors color;
    for(color = RED; color <= GREEN; color++) {
        switch(color) {
            case RED:
                printf("RED=%d\n", RED);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", YELLOW);
                break;
            case GREEN:
                printf("GREEN=%d\n", GREEN);
                break;
        }
    }
    return 0;
}
