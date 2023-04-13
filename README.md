# Simple Shell
This is a simple shell that executes commands and follows
the betty style guide. This shell program can be used to execute
standard commands such as rm and ls

## Compilation
This shell will be compiled this way

- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Testing
The shell would work like this in interactive model:
   $ ./hsh
  ($) /bin/ls
   hsh main.c shell.c
  ($)
  ($) exit
   $
But also in non-interactive mode:
  $ echo "/bin/ls" | ./hsh
  hsh main.c shell.c test_ls_2
  $
  $ cat test_ls_2
  /bin/ls
  /bin/ls
  $
  $ cat test_ls_2 | ./hsh
  hsh main.c shell.c test_ls_2
  hsh main.c shell.c test_ls_2
  $

## Authors

Loise Muthoni Muthoni
Erick Ngugi

