#include <los.h>
#include <stdio.h>

#define BUFFER_LENGTH 4096

char buffer[BUFFER_LENGTH];

int main() {
    int64_t status = get_current_working_directory(buffer, BUFFER_LENGTH);

    if (status >= 0)
        printf("%s\n", buffer);
    else {
        printf("Error while getting present working directory: %li\n", status);
        return 1;
    }
}