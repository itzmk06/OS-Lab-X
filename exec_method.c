#include<stdio.h>
#include<unistd.h>

int main() {
    printf("This is from the original process!\n");
    if (execlp("ls", "ls", "-l", NULL) == -1) {
        perror("exec");
        return -1;
    }
    printf("This line will not be printed!\n");
    return 0;
}
