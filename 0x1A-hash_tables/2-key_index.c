#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size) {

	/* Calculate the hash value for the key */
	unsigned long int hash = hash_djb2(key);

	/* Calculate the index by taking the modulus of the hash value and the size of the array */
	unsigned long int index = hash % size;

	return index;
}
