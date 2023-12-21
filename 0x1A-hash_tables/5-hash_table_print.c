#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned int i, b = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (b)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			b = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
