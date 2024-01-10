#include "lists.h"
/**
 * check_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to the head of the list
 * @tail: double pointer to the tail of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int check_palindrome(listint_t **head, listint_t **tail)
{
	int res, res1;

	if (*head == NULL)
	return (1);
	res = check_palindrome(&((*head)->next), tail);
	if (res == 0)
	{
		return (0);
	}
	res1 = ((*head)->n == (*tail)->n);
	*tail = (*tail)->next;
	return (res1);
}

/**
 * is_palindrome - helper function to start the recursion
 * @head: double pointer to the head of the list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	return (check_palindrome(head, head));
}

