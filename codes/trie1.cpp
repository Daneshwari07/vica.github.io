#include <bits/stdc++.h>
using namespace std;

// Trie node structure
class TrieNode {
public:
    TrieNode *children[26];  // Pointers to child nodes
    bool isLeaf;             // True if node marks end of a word

    TrieNode() {
        isLeaf = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

// Insert a word into the Trie
void insert(TrieNode *root, const string &key) {
    TrieNode *curr = root;
    for (char c : key) {
        if (curr->children[c - 'a'] == nullptr)
            curr->children[c - 'a'] = new TrieNode();
        curr = curr->children[c - 'a'];
    }
    curr->isLeaf = true;
}

// Search for a complete word in the Trie
bool search(TrieNode *root, const string &key) {
    if (root == nullptr) return false;
    TrieNode *curr = root;
    for (char c : key) {
        if (curr->children[c - 'a'] == nullptr)
            return false;
        curr = curr->children[c - 'a'];
    }
    return curr->isLeaf;
}

// Check if a prefix exists in the Trie
bool isPrefix(TrieNode *root, const string &prefix) {
    TrieNode *curr = root;
    for (char c : prefix) {
        if (curr->children[c - 'a'] == nullptr)
            return false;
        curr = curr->children[c - 'a'];
    }
    return true;
}

int main() {
    TrieNode *root = new TrieNode(); // Create root node

    vector<string> arr = {"and", "ant", "do", "dad"}; // Words to insert
    for (const string &s : arr)
        insert(root, s);

    // Search for full words
    vector<string> searchKeys = {"do", "gee", "bat"};
    for (string &s : searchKeys)
        cout << (search(root, s) ? "true " : "false ");
    cout << "\n";

    // Search for prefixes
    vector<string> prefixKeys = {"ge", "ba", "do", "de"};
    for (string &s : prefixKeys)
        cout << (isPrefix(root, s) ? "true " : "false ");

    return 0;
}
