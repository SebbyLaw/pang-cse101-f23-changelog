#include <stdbool.h>

#ifndef DICT_HEADER
#define DICT_HEADER

typedef struct {
    char  *key;		// key for dictionary element
    void *value;	// generic pointer to value of dictionary element
} KVPair;		    // key:value pair of dictionary elements

typedef struct Dictionary Dictionary;

#endif

// -------------------------------
// Function headers
// -------------------------------

/**
 * @brief Creates a new dictionary.
 * 
 * @param hash_table_size The size of the hash table for the dictionary
 * @param dataPrinter Function used to print the value in the KVPair 
 * @return Dictionary* The newly created dictionary
 */
Dictionary *dictionary_create(int hash_table_size, void (*dataPrinter)(void *data));

/**
 * @brief Destroys the memory taken up by the dictionary
 * 
 * @param d The dictionary to destroy
 */
void dictionary_destroy(Dictionary *d);

/**
 * @brief Insert a key-value pair into the dictionary
 * 
 * @param D The dictionary to insert into
 * @param elem The KVPair to insert
 * @return true If the operation succeeded
 * @return false If an element with the same key already exists in the dictionary
 */
bool dictionary_insert(Dictionary *D, KVPair *elem);

/**
 * @brief Removes an entry from the dictionary, returning the removed KVPair. Returns NULL if the key is not in the dictionary.
 * 
 * @param D The dictionary to remove the entry from
 * @param key The key to remove
 * @return KVPair* The KVPair for the key that was removed, or NULL.
 */
KVPair *dictionary_delete(Dictionary *D, char *key);

/**
 * @brief Gets the entry from the dictionary for the given key. Returns NULL if the key is not in the dictionary.
 * 
 * @param D The dictionary to get the KVPair from
 * @param k The key to find the KVPair for
 * @return KVPair* The KVPair found, or NULL.
 */
KVPair *dictionary_find(Dictionary *D, char *k);

/**
 * @brief Prints the dictionary to stdout in format k1:v1 k2:v2 ... kn:vn \n
 * 
 * @param D The dictionary to print
 */
void dictionary_print(Dictionary *D);

/**
 * @brief Finds the author(s) with the most songs in the music database and prints them.
 * 
 * @param D The music database to analyze
 */
void getAuthorWithMostSongs(Dictionary *D);

/**
 * @brief Finds and prints the most frequent words in the music database song titles.
 * 
 * @param D The music database to analyze
 */
void getMostFrequentWords(Dictionary *D);