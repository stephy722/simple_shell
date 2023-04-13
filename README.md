# Simple Shell
This is a simple shell that executes commands and follows
the betty style guide. This shell program can be used to execute
standard commands such as rm and ls

## Compilation
This shell will be compiled this way

- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Testing
### The shell would work like this in interactive model: <br />
   $ ./hsh <br />
  ($) /bin/ls <br />
   hsh main.c shell.c <br />
  ($) <br />
  ($) exit <br />
   $ <br />
### But also in non-interactive mode: <br />
  $ echo "/bin/ls" | ./hsh <br />
  hsh main.c shell.c test_ls_2 <br />
  $ <br />
  $ cat test_ls_2 <br />
  /bin/ls <br />
  /bin/ls <br />
  $ <br />
  $ cat test_ls_2 | ./hsh <br />
  hsh main.c shell.c test_ls_2 <br />
  hsh main.c shell.c test_ls_2 <br />
  $ <br />

## Authors

Loise Muthoni Muthoni <br />
Erick Ngugi <br />

