#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: the hash table
 *
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *ptr, *tmp;


	if (ht && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				free(ptr->key);
				free(ptr->value);
				tmp = ptr->next;
				free(ptr);
				ptr = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
