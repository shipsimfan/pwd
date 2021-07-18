#include <los.h>
#include <stdio.h>

#define BUFFER_LENGTH 4096

char buffer[BUFFER_LENGTH];

int main() {
    if (get_current_working_directory(buffer, BUFFER_LENGTH) != 0xFFFFFFFFFFFFFFFF) {
        printf("%s\n", buffer);
    } else {
        printf("Error while getting present working directory\n");
        return 1;
    }
}