#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (0);

	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
		return (0);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
