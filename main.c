#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (){
        int fileDescriptor[2];

        if (pipe(fileDescriptor) == -1){
                printf("error when create pipe\n");
                return 1;
        }
        int pid;
        pid = fork();

        if (pid == 0){
                char readMessage[10];
                close(fileDescriptor[1]);
                read(fileDescriptor[0], readMessage, 10);
                printf("message: %s\n", readMessage);
        }
        else if (pid > 0){
                close(fileDescriptor[0]);
                write(fileDescriptor[1], "testing...", 10);

        }
        else{
                printf("erro");
                return 1;
        }
}