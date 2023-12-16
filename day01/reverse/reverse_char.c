#include <stdio.h>
#include <string.h>

void reverser(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(void) {
    char text[] = "Assalam Aleykoum Chaibou";
    reverser(text);
    printf("Reverse: %s\n", text);

    return 0;
}