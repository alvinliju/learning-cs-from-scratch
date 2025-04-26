#include <stdio.h>

// Dummy function to simulate some logic
void performDummyTask() {
    printf("Performing a dummy task...\n");
}

// Another dummy function
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    printf("Starting dummy program...\n");

    performDummyTask();

    int result = addNumbers(5, 7);
    printf("Result of adding numbers: %d\n", result);

    printf("Dummy program finished.\n");
    return 0;
}

