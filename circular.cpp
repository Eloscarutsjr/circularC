#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Agregar nodo al inicio
    void add_at_start(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {  // Si la lista está vacía
            head = new_node;
            new_node->next = head;  // Apunta a sí mismo
        } else {
            Node* current = head;
            while (current->next != head) {  // Encontrar el último nodo
                current = current->next;
            }
            current->next = new_node;  // Último nodo apunta al nuevo nodo
            new_node->next = head;     // Nuevo nodo apunta a cabeza
            head = new_node;           // Actualiza el cabeza
        }
    }

    // Agregar nodo al final
    void add_at_end(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {  // Si la lista está vacía
            head = new_node;
            new_node->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {  // Encontrar el último nodo
                current = current->next;
            }
            current->next = new_node;  // El último nodo apunta al nuevo
            new_node->next = head;     // El nuevo nodo apunta a cabeza
        }
    }

    // Agregar nodo en el medio
    void add_at_middle(int data) {
        if (head == nullptr) {  // Si la lista está vacía
            add_at_start(data);  // Si está vacía, agregar al inicio
        } else {
            Node* new_node = new Node(data);
            Node* slow = head;
            Node* fast = head;

            // Encontrar el nodo en la posición media
            while (fast->next != head && fast->next->next != head) {
                slow = slow->next;
                fast = fast->next->next;
            }

            // Insertar el nuevo nodo en el medio
            new_node->next = slow->next;
            slow->next = new_node;
        }
    }

    // Imprimir la lista circular
    void print_list() {
        if (head == nullptr) {
            cout << "La lista está vacía." << endl;
            return;
        }
        Node* current = head;
        do {
            cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        cout << "(cabeza)" << endl;
    }
};

int main() {
    CircularLinkedList list;

    list.add_at_start(3);
    list.add_at_start(2);
    list.add_at_start(1);

    list.add_at_end(4);
    list.add_at_end(5);

    list.add_at_middle(99);

    list.print_list();

    return 0;
}