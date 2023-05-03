# # MORE SINGLY LINKED LISTS # #

The following data structure is used to create a struct.

`/**`

`* struct listint_s - singly linked list`

 `* @n: integer`

 `* @next: points to the next node`

 `*`
 `* Description: singly linked list node structure`
 `*`
 `*/`

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

## TASK  0 ##

a function that prints all the elements of a `listyint_t` list.
Prototype: size_t print_listint(const listyint_t *h);
Return: the number of nodes.
allowed to use printf.
You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a`

After generating the executable file you run `./a` on the terminal.

Output should be:

9
8
-> 2 elements

## TASK  1 ##

A function that returns the number of elements in a linked `listyint_t` list.
Prototype: size_t listint_len(const listint_t *h);
You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b`

After generating the executable file you need to run `./b` on the terminal.

Output should be:

-> 2 elements

## TASK  2 ##

A function that adds a new node at the beginning of a `listint_t` list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);

Return: the address of the new element, or NULL if it failed

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c`

After generating the executable file you run `./c` on the terminal.

Output should be.

1024

402

98

4

3

2

1

0

## TASK  3 ##

A function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

Return: the address of the new element, or NULL if it failed

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d`

After generating the executable file you  need to run `./d` on the terminal.

Output should be:

0

1

2

3

4

98

402

1024

## TASK  4 ##

A function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e`

After generating the executable file you need to run `valgrind ./e` on the terminal.

Output should be:

==3643== Memcheck, a memory error detector

==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.

==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info

==3643== Command: ./e

==3643==

0

1

2

3

4

98

402

1024

==3643==

==3643== HEAP SUMMARY:

==3643==     in use at exit: 0 bytes in 0 blocks

==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated

==3643==

==3643== All heap blocks were freed -- no leaks are possible

==3643==

==3643== For counts of detected and suppressed errors, rerun with: -v

==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

## TASK  5 ##

Write a function that frees a `listint_t` list.

Prototype: void free_listint2(listint_t **head);

The function sets the head to NULL

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f`

After generating the executable file run the following command on the terminal.

`valgrind ./f`

Output should be.

==3843== Memcheck, a memory error detector

==3843== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.

==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info

==3843== Command: ./f

==3843==

0

1

2

3

4

98

402

1024

(nil)

==3843==

==3843== HEAP SUMMARY:

==3843==     in use at exit: 0 bytes in 0 blocks

==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated

==3843==

==3843== All heap blocks were freed -- no leaks are possible

==3843==

==3843== For counts of detected and suppressed errors, rerun with: -v

==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

## TASK  6 ##

A function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);

if the linked list is empty return 0

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g`

After generating the executable file run the following command on the terminal:

`valgrind ./g`

Output should be:

==4369== Memcheck, a memory error detector

==4369== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.

==4369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info

==4369== Command: ./g

==4369==

0

1

2

3

4

98

402

1024

`- 0`

1

2

3

4

98

402

1024

`- 1`

2

3

4

98

402

1024

(nil)

==4369==

==4369== HEAP SUMMARY:

==4369==     in use at exit: 0 bytes in 0 blocks

==4369==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated

==4369==

==4369== All heap blocks were freed -- no leaks are possible

==4369==

==4369== For counts of detected and suppressed errors, rerun with: -v

==4369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

## TASK  7 ##

A function that returns the nth node of a `listint_t` linked list.

Prototype: listint_t `*get_nodeint_at_index(listint_t *head`, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h`

After generating the executable file run the following command on the terminal.

`./h`

Output should be.

0

1

2

3

4

98

402

1024

98

0

1

2

3

4

98

402

1024

## TASK  8 ##

Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);

if the list is empty, return 0

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i`

After generating the executable file run the following command on the terminal.

`./i`

Output should be.

sum = 1534

## TASK  9 ##

A function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

where idx is the index of the list where the new node should be added. Index starts at 0

Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j`

After generating the executable file run the following command on the terminal.

`./j`

Output should be.

0

1

2

3

4

98

402

1024

`-----------------`

0

1

2

3

4

4096

98

402

1024

## TASK  10 ##

A function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

You need to run:

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k`

After generating the executable file run the following command on the terminal.

`valgrind ./k`

Output should be:

==5571== Memcheck, a memory error detector

==5571== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.

==5571== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info

==5571== Command: ./k

==5571==

0

1

2

3

4

98

402

1024

`-----------------`

0

1

2

3

4

402

1024

`-----------------`

1

2

3

4

402

1024

`-----------------`

2

3

4

402

1024

`-----------------`

3

4

402

1024

`-----------------`

4

402

1024

`-----------------`

402

1024

`-----------------`

1024

`-----------------`

`-----------------`

`-----------------`

`-----------------`

`-----------------`

`-----------------`

`-----------------`

`-----------------`

`-----------------`

`-----------------`

==5571==

==5571== HEAP SUMMARY:

==5571==     in use at exit: 0 bytes in 0 blocks

==5571==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated

==5571==

==5571== All heap blocks were freed -- no leaks are possible

==5571==

==5571== For counts of detected and suppressed errors, rerun with: -v

==5571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
