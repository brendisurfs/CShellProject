/**
 * @file main.c
 * @author Brendan Prednis
 * @brief
 * @version 0.1
 * @date 2021-10-19
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * BASIC PROGRAM LOGIC
 Read: Read the command from stdin.
 Parse: Seperate the command string into a program and arguments.
 Execute: Run the parsed command.
 *
 */
void bsh_loop(void) {
      char *line;
      char **args;
      int status;

      do {
            printf("> ");
            line = bsh_read_line();
            args = bsh_split_line(line);
            status = bsh_execute(args);

            free(line);
            free(args);
      } while (status);
}

#define BSH_RL_BUFSIZE 1024
char *bsh_read_line(void) {
      int bufsize = BSH_RL_BUFSIZE;
      int position = 0;
}

int main(int argc, char **argv) {
      // 1. load any config files

      // 2. Run command loop.
      bsh_loop();

      //   3. Perform any shutdown/cleanup.
      return EXIT_SUCCESS;
}
