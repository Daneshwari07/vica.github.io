#include <iostream>
#include <array>
#include <cmath>
using namespace std;

template <size_t K>
class KDTree {
private:
    struct Node {
        array<double, K> point; 
        Node* left;          
        Node* right;            
        Node(const array<double, K>& pt) : point(pt), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insertRecursive(Node* node, const array<double, K>& point, int depth) {
        if (node == nullptr) return new Node(point);
        int cd = depth % K;
        if (point[cd] < node->point[cd])
            node->left = insertRecursive(node->left, point, depth + 1);
        else
            node->right = insertRecursive(node->right, point, depth + 1);
        return node;
    }

    bool searchRecursive(Node* node, const array<double, K>& point, int depth) const {
        if (node == nullptr) return false;
        if (node->point == point) return true;
        int cd = depth % K;
        if (point[cd] < node->point[cd])
            return searchRecursive(node->left, point, depth + 1);
        else
            return searchRecursive(node->right, point, depth + 1);
    }

    void printRecursive(Node* node, int depth) const {
        if (node == nullptr) return;
        for (int i = 0; i < depth; i++) cout << "  ";
        cout << "(";
        for (size_t i = 0; i < K; i++) {
            cout << node->point[i];
            if (i < K - 1) cout << ", ";
        }
        cout << ")" << endl;
        printRecursive(node->left, depth + 1);
        printRecursive(node->right, depth + 1);
    }

public:
    KDTree() : root(nullptr) {}

    void insert(const array<double, K>& point) {
        root = insertRecursive(root, point, 0);
    }

    bool search(const array<double, K>& point) const {
        return searchRecursive(root, point, 0);
    }

    void print() const {
        printRecursive(root, 0);
    }
};

int main() {
    KDTree<2> tree;

    tree.insert({3, 6});
    tree.insert({2, 2});
    tree.insert({4, 7});
    tree.insert({1, 3});
    tree.insert({2, 4});
    tree.insert({5, 4});
    tree.insert({7, 2});

    cout << "KD Tree structure:" << endl;
    tree.print();

    array<double, 2> searchPoint = {2, 4};
    cout << "\nSearching for point (2, 4): " 
         << (tree.search(searchPoint) ? "Found" : "Not found") << endl;

    searchPoint = {6, 3};
    cout << "Searching for point (6, 3): " 
         << (tree.search(searchPoint) ? "Found" : "Not found") << endl;

    return 0;
}
