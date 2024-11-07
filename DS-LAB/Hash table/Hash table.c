#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

struct DataItem {
    int data;
    int key;
};

struct DataItem* hashArray[SIZE];
struct DataItem* dummyItem;

// Hash function to calculate index
int hashCode(int key) {
    return key % SIZE;
}

// Function to search for a key in the hash table
struct DataItem* search(int key) {
    int hashIndex = hashCode(key);
    while (hashArray[hashIndex] != NULL) {
        if (hashArray[hashIndex]->key == key)
            return hashArray[hashIndex];
        hashIndex = (hashIndex + 1) % SIZE; // Wrap around
    }
    return NULL;
}

// Function to insert a key-value pair into the hash table
void insert(int key, int data) {
    struct DataItem* item = malloc(sizeof(struct DataItem));
    item->data = data;
    item->key = key;

    int hashIndex = hashCode(key);
    while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
        hashIndex = (hashIndex + 1) % SIZE; // Wrap around
    }
    hashArray[hashIndex] = item;
}

// Function to delete a key from the hash table
struct DataItem* delete(struct DataItem* item) {
    int key = item->key;
    int hashIndex = hashCode(key);
    while (hashArray[hashIndex] != NULL) {
        if (hashArray[hashIndex]->key == key) {
            struct DataItem* temp = hashArray[hashIndex];
            hashArray[hashIndex] = dummyItem; // Mark as deleted
            return temp;
        }
        hashIndex = (hashIndex + 1) % SIZE; // Wrap around
    }
    return NULL;
}

// Function to display the hash table
void display() {
    for (int i = 0; i < SIZE; i++) {
        if (hashArray[i] != NULL) {
            printf(" (%d, %d)", hashArray[i]->key, hashArray[i]->data);
        } else {
            printf(" ~~ ");
        }
    }
    printf("\n");
}

// Driver code
int main() {
    dummyItem = malloc(sizeof(struct DataItem));
    dummyItem->data = -1;
    dummyItem->key = -1;

    // Inserting elements into the hash table
    insert(1, 20);
    insert(2, 70);
    insert(42, 80);
    insert(4, 25);
    insert(12, 44);
    insert(14, 32);
    insert(17, 11);
    insert(13, 78);
    insert(37, 97);

    // Display the hash table
    display();

    // User input for searching an element
    int searchKey;
    printf("Enter the key to search: ");
    scanf("%d", &searchKey);

    // Search for the element
    struct DataItem* item = search(searchKey);
    if (item != NULL) {
        printf("Element found: %d\n", item->data);
    } else {
        printf("Element not found\n");
    }

    // Optionally delete the element
    if (item != NULL) {
        delete(item);
        printf("Element with key %d deleted.\n", searchKey);
    }

    free(dummyItem); // Free allocated memory
    return 0;
}
