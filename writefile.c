#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void main(){
    //char msg[20] = "hello \n";
    char buffer[1]; //used to store one byte

    int fd = open("name.txt", O_CREAT | O_WRONLY, 0777); //opening file in write mode
    int w = write(fd, "chris", 5); //writing "chris" to file(fd), 5 bytes
    close(fd);

    fd = open("name.txt", O_RDONLY);
    int r;
    while (r>0){
        r = read(fd, buffer, 1);
        printf("%s", buffer);
    }
    close(fd);
}