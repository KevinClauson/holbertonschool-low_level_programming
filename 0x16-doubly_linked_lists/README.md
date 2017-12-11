# 0x16-doubly_linked_lists 
 
## Doubly linked lists
### lists.h
* Header file containing function prototypes and struct for doubly linked list node

### 0-print_dlistint.c
* Prints a `dlistint_t` list
* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: number of nodes

### 1-dlistint_len.c
* Counts the number of nodes in a `dlistint_t` list
* Prototype: `size_t dlistint_len(const dlistint_t *h);`
* Return: number of nodes

### 2-add_dnodeint.c
* Adds a new node at the beginning of a `dlistint_t` list
* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: address of new element or `NULL` if fail

### 3-add_dnodeint_end.c
* Adds a new node at the end of a `dlistint_t` list
* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: address of new element or `NULL` if fail

### 4-free_dlistint.c
* Free a `dlistint_t` list
* Prototype: `void free_dlistint(dlistint_t *head);`

### 5-get_dnodeint.c
* Returns the `n`th node of a `dlistint_t` list
* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
* Return: address of `n`th node or `NULL` if does not exist

### 6-sum_dlistint.c
* Computes the sum of elements in `dlistint_t` list
* Prototype: `int sum_dlistint(dlistint_t *head);`
* Return: sum of elements in list, `0` if list is empty

### 7-insert_dnodeint.c
* Inserts a new node at a given position
* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
* Return: address of new node or `NULL` if fail

### 8-delete_dnodeint.c
* Delete node at a given position
* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
* Return: `1` if success, `-1` if fail

### 102-result
* Contains the largest palindrome from the product of two 3-digit numbers
