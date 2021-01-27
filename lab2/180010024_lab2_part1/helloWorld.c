#include<stdio.h>
#include <sys/types.h>
#include<unistd.h>
#include<stdlib.h>

const char* Str = "Hello World";
const int N = 11;

// void processesPrint(int idx){
//     if(idx>=11) return;
//     else {
//         printf("%c %d\n",Str[idx],getpid());
//         int n = fork();
//         if(n==0)   processesPrint(idx+1);
//         else sleep(1);
//     }
// }

int main(){
    // processesPrint(0);
    int pid = getpid();
    for(int i=0;i<N;i++){
        if(fork()){
            sleep(1);
            exit(0);
        }
        else printf("%c %d parent : %d\n",Str[i],getpid(),getppid());   
    }
    return 0;
}