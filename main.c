#include <stdio.h>


#define SEASH_RL_BUFSIZE 1024
char *seash_read_line(void) {
    int bufsize = SEASH_RL_BUFSIZE;
    int position = 0;
    char *buffer = malloc(sizeof(char) * bufsize);
    int c;
}

// define seash_loop
void seash_loop(void){
    char *line;
    char **args;
    int status;

    do {
        printf("> ");
        line = seash_read_line();
        args = seash_split_line(line);
        status = seash_execute(args);

        free(line);
        free(args);
    } while (status);
}

int main() {

    //run command loop
    seash_loop();

    return EXIT_SUCCESS;
}
