/*** Aufgabe_09_3.h ***/
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <ostream>

template<typename T>
class BinTree {
private:
    struct Node {
        T data;
        Node *left, *right;
    } *root;

    Node *insert(Node *node, T key);

    bool isElem(Node *node, T key) const;

    void clear(Node *node);

    void print(Node *node) const;

    // Notwendige Methode (siehe Dateiende)
    // fuer Aufgabe 3, um redundanten Code
    // zu vermeiden
    void copyElements(Node *node);

public:
    BinTree() { root = nullptr; }

    BinTree(std::string &filename);

    ~BinTree() { clear(); }

    void print() const { print(root); }

    void insert(T x) { root = insert(root, x); }

    bool isElem(T x) const { return isElem(root, x); }

    void clear() {
        clear(root);
        root = nullptr;
    }

    void printLevel(std::ostream &os, Node *node, int level, int current, int offset) const;

    int depth(Node *node) const { return (node == nullptr ? 0 : 1 + std::max(depth(node->left), depth(node->right))); }

    void printToConsole() const;

    void printAsTree(std::ostream &os) const;

    // Verlangte Methoden
    BinTree(const BinTree<T> &baum);

    BinTree<T> &operator=(const BinTree<T> &baum);
};

template<typename T>
BinTree<T>::BinTree(std::string &filename)
        : root(nullptr) {
    std::ifstream source;
    source.open(filename.c_str());
    if (!source.is_open()) {
        exit(1);
    }

    T s;
    while (!source.eof()) {
        source >> s;
        insert(s);
    }
    source.close();
}

template<typename T>
bool BinTree<T>::isElem(Node *node, T key) const {
    if (node == nullptr) return false;
    if (node->data == key) return true;
    if (node->data < key)
        return isElem(node->right, key);
    return isElem(node->left, key);
}

template<typename T>
void BinTree<T>::clear(Node *node) {
    if (node == nullptr)
        return; // Rekursionsabbruch
    clear(node->left); // linken Unterbaum loeschen
    clear(node->right); // rechten Unterbaum loeschen
    delete node; // Knoten loeschen
}

template<typename T>
typename BinTree<T>::Node *BinTree<T>::insert(Node *node, T key) {
    if (node == nullptr) {
        node = new Node;
        node->data = key;
        node->left = node->right = nullptr;
        return node;
    }
    if (node->data < key)
        node->right = insert(node->right, key);
    else if (node->data > key)
        node->left = insert(node->left, key);

    return node;
}

template<typename T>
void BinTree<T>::print(Node *node) const {
    if (node == nullptr) return;
    print(node->left);
    std::cout << node->data << std::endl;
    print(node->right);
}

template<typename T>
void BinTree<T>::printToConsole() const {
    printAsTree(std::cout);
}

template<typename T>
void BinTree<T>::printAsTree(std::ostream &os) const {
    int depth = this->depth(this->root);
    for (int i = 1; i <= depth; ++i) {
        printLevel(os, root, i, 1, 32);
        os << "\n";
    }
}

template<typename T>
void BinTree<T>::printLevel(std::ostream &os, Node *node, int level, int current, int offset) const {
    if (level == current) {
        for (int i = 0; i < offset - 2; ++i) {
            os << " ";
        }
        if (node != nullptr) {
            os << std::setfill(' ') << std::setw(4);
            os << node->data;
        } else {
            os << "    ";
        }
        for (int i = 0; i < offset - 2; ++i) {
            os << " ";
        }

    } else {
        if (node == nullptr) {
            printLevel(os, nullptr, level, current + 1, offset / 2);
            printLevel(os, nullptr, level, current + 1, offset / 2);
        } else {
            printLevel(os, node->left, level, current + 1, offset / 2);
            printLevel(os, node->right, level, current + 1, offset / 2);
        }
    }
}

// Notwendige Methode: copyElements(Node *node)
template<typename T>
void BinTree<T>::copyElements(Node *node) {

}

// Verlangte Methode: BinTree(const BinTree<T> &baum)
template<typename T>
BinTree<T>::BinTree(const BinTree<T> &baum) {

}

// Verlangte Methode: operator=(const BinTree<T> &baum)
template<typename T>
BinTree<T> &BinTree<T>::operator=(const BinTree<T> &baum) {

}
/*** Ende Aufgabe_09_3.h ***/
