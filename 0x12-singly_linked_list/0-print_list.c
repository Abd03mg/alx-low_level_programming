

/**
 * print_list - function that prints the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t elem = 0;

	if (h == NULL)
		return (elem);
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	elem++;
	print_list(h->next);
	
}
