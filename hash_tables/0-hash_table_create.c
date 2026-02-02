#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table of given size
 * @size: size of the array
 *
 * Return: pointer to the new hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    /* Allocate memory for the hash table struct */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Set the size */
    ht->size = size;

    /* Allocate memory for the array of hash_node_t pointers */
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht); /* free previously allocated memory */
        return (NULL);
    }

    /* Initialize all array elements to NULL */
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}
