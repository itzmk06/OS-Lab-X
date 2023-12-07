#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t pid=fork();
    if(pid==0){
        printf("This is child process.\n");
        printf("Pid of child: %d\n",getpid());
        printf("Pid of child's parent: %d\n",getppid());
    }else if(pid>0){
        printf("This is parent process.\n");
        printf("Pid of parent from parent process :%d\n",getpid());
    }else{
        printf("There's an error while process creation!\n");
    }
    printf("Hello,world! :)\n");
    return 0;

}
