#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
using namespace std;

const int TABLE_SIZE = 128;

// Class to represent each entry in the hash table
class HashEntry {
public:
    int key;
    int value;
    HashEntry(int key, int value) {
        this->key = key;
        this->value = value;
    }
};

// HashMap class with basic operations
class HashMap {
private:
    HashEntry **table;

public:
    // Constructor to initialize the hash table
    HashMap() {
        table = new HashEntry *[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = NULL;
        }
    }

    // Hash function to calculate index
    int HashFunc(int key) {
        return key % TABLE_SIZE;
    }

    // Insert a key-value pair into the hash table
    void Insert(int key, int value) {
        int hash = HashFunc(key);
        while (table[hash] != NULL && table[hash]->key != key) {
            hash = HashFunc(hash + 1); // Linear probing
        }
        if (table[hash] != NULL)
            delete table[hash];
        table[hash] = new HashEntry(key, value);
    }

    // Search for a value by key
    int Search(int key) {
        int hash = HashFunc(key);
        while (table[hash] != NULL && table[hash]->key != key) {
            hash = HashFunc(hash + 1); // Linear probing
        }
        if (table[hash] == NULL)
            return -1;
        else
            return table[hash]->value;
    }

    // Remove a key-value pair by key
    void Remove(int key) {
        int hash = HashFunc(key);
        while (table[hash] != NULL) {
            if (table[hash]->key == key)
                break;
            hash = HashFunc(hash + 1); // Linear probing
        }

        if (table[hash] == NULL) {
            cout << "No Element found at key " << key << endl;
            return;
        } else {
            delete table[hash];
            table[hash] = NULL; // Set to NULL to avoid dangling pointer
            cout << "Element Deleted" << endl;
        }
    }

    // Destructor to free memory
    ~HashMap() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (table[i] != NULL)
                delete table[i];
        }
        delete[] table;
    }
};

// Main function with menu
int main() {
    HashMap hash;
    int key, value;
    int choice;
    while (1) {
        cout << "\n----------------------" << endl;
        cout << "Operations on Hash Table" << endl;
        cout << "----------------------" << endl;
        cout << "1. Insert element into the table" << endl;
        cout << "2. Search element from the key" << endl;
        cout << "3. Delete element at a key" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter element to be inserted: ";
            cin >> value;
            cout << "Enter key at which element to be inserted: ";
            cin >> key;
            hash.Insert(key, value);
            break;

        case 2:
            cout << "Enter key of the element to be searched: ";
            cin >> key;
            if (hash.Search(key) == -1) {
                cout << "No element found at key " << key << endl;
            } else {
                cout << "Element at key " << key << " : " << hash.Search(key) << endl;
            }
            break;

        case 3:
            cout << "Enter key of the element to be deleted: ";
            cin >> key;
            hash.Remove(key);
            break;

        case 4:
            exit(0);

        default:
            cout << "\nEnter correct option\n";
        }
    }
    return 0;
}
