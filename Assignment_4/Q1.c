#include <stdio.h>
#include<unistd.h>

int main(){
    if(fork()==0){ //function getting called here
        printf("Child Process is running\n");
    }
    else {
        printf("Parent Process is running\n");
    }
    return 0;
}