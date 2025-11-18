//Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Status {SUCCESS = 1, FAILURE = 0, PENDING = -1};
int main() {
    enum Status stat;
    for(stat = FAILURE; stat <= SUCCESS; stat++) {
        switch(stat) {
            case SUCCESS:
                printf("SUCCESS=%d\n", SUCCESS);
                break;
            case FAILURE:
                printf("FAILURE=%d\n", FAILURE);
                break;
            case PENDING:
                printf("PENDING=%d\n", PENDING);
                break;
        }
    }
    return 0;
}
