#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 *
 * Return: A pointer to the newly created hash table or Null otherwise
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);

	return (ht);
}
