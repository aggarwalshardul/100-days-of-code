//Q138: Print all enum names and integer values using a loop.
#include <stdio.h>
enum Colors {RED, GREEN, BLUE, YELLOW};
int main() {
    enum Colors color;
    for(color = RED; color <= YELLOW; color++) {
        switch(color) {
            case RED:
                printf("RED=%d\n", RED);
                break;
            case GREEN:
                printf("GREEN=%d\n", GREEN);
                break;
            case BLUE:
                printf("BLUE=%d\n", BLUE);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", YELLOW);
                break;
        }
    }
    return 0;
}
