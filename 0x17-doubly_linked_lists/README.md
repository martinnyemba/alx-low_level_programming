# 0x17. C - Doubly Linked Lists

This project focuses on implementing doubly linked lists in C. Doubly linked lists are a type of linked list in which each node contains a reference to the previous and next node in the sequence, allowing for traversal in both directions.

## Resources
- [What is a Doubly Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)
- Learning Objectives:
  - Understand what a doubly linked list is and how to use it
  - Implement various operations (deletion, insertion, etc.) with doubly linked lists
  - Develop the ability to find the right source of information independently

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- Use the Betty style for code formatting (checked using betty-style.pl and betty-doc.pl)
- Do not use global variables
- Limit functions to no more than 5 per file
- Only standard library functions allowed are malloc, free, printf, and exit
- All function prototypes should be included in the header file `lists.h`
- Ensure header files are include guarded

## Tasks
1. **Print list**
   - Function: `size_t print_dlistint(const dlistint_t *h)`
   - Print all elements of a `dlistint_t` list

2. **List length**
   - Function: `size_t dlistint_len(const dlistint_t *h)`
   - Return the number of elements in a `dlistint_t` list

3. **Add node**
   - Function: `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`
   - Add a new node at the beginning of a `dlistint_t` list

4. **Add node at the end**
   - Function: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`
   - Add a new node at the end of a `dlistint_t` list

5. **Free list**
   - Function: `void free_dlistint(dlistint_t *head)`
   - Free a `dlistint_t` list

6. **Get node at index**
   - Function: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`
   - Return the nth node of a `dlistint_t` list

7. **Sum list**
   - Function: `int sum_dlistint(dlistint_t *head)`
   - Return the sum of all elements in a `dlistint_t` list

8. **Insert at index**
   - Function: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)`
   - Insert a new node at a given position in a `dlistint_t` list

9. **Delete at index**
   - Function: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)`
   - Delete the node at a given index in a `dlistint_t` list

10. **Crackme4**
    - Find the password for `crackme4` and save it in the file `100-password`

11. **Palindromes**
    - Find the largest palindrome made from the product of two 3-digit numbers and save it in the file `102-result`

12. **Crackme5**
    - Write a keygen for `crackme5` and save the keygen as `103-keygen.c`
