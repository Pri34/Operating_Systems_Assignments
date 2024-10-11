//exit is used to terminate a command
//wait suspends exceution of current process untill one of its child process is completed
//to make sure ki parent process is terminated after child process is completed
//pid_t wait(int *wstatus) int pointer shows status of process if its waiting or in process
//wait system call is used with parent process code
//q1 mein else ke saath used kyuki parent process executed that
//isse always child code comes first and then the parent process
//null pointer pass karlo no integer pointer we are using
//pid_t waiy(* int) //function declation
//pid_t is return type....signed integer type...(1 -1) these two if same for the variable then that variable is unsigned type
//if its diff 1 and -1 then signed data type
//ronly flag nhi use karenge kyuki varna siraf read kar payenge and write nhi kar payenge
//ocreate is for if file doesnt exist then create ho jayega

// #include <stdio.h>
// #include<unistd.h>
// #include<sys/types.h>
// #include<sys/wait.h>

// int main(){
//     if(fork()==0){
//         printf("Child Process is running\n");
//     }
//     else {
//         wait(NULL);
//         printf("Parent Process is running\n");
//     }
//     return 0;
// }

//getppid parent process id when u want to access it in child process 
//getpid child process id when in child process
//getpid parent process id when in parent process

// #include <stdio.h>
// #include<unistd.h>
// #include<sys/types.h>
// #include<sys/wait.h>

// int main(){
//     if(fork()==0){
//         printf("Child Process is running\n");
//         printf("Child Process is running with id %d with parent id %d\n",getpid(),getppid());
//     }
//     else {
//         wait(NULL);
//         printf("Parent Process is running\n");
//         printf("Parent Process is running with id %d\n",getpid());
//     }
//     return 0;
// }

//exit() command to terminate a process
//used with wait() 
//when exit is used then child id is returned to parent process to tell it that its which child is terminated
//agar parent process terminated and child process is still working then some time ke liye they are orghaned process
//as soon as orghanened process is seen..os assigns it parent i.e init process with id =1
//os boot hone par jo phela process is made i.e init process
//exit ke andar we have to pass integers -1 means error 0 means everything is normal
//exit(0) means just we exit the process normally
//sleep hone par 50ms ke liye process go to block state
//signal of child process terminated will be reccived by parent after 50ms
//zombie process 50ms ke liye child process i.e terminated and oski info abhi tak parent process tak nhi pahuchi
//i.e zombie is dead but partially alive 


