

#include <stdio.h>
void performDummyTask() {
    printf("Performing a dummy task...\n");
}

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    printf("Starting dummy program...\n");

    performDummyTask();

    int result = addNumbers(5, 7);
    printf("Result of adding numbers: 0\n", result);

    printf("Dummy program finished.\n");
    return 0;
}

