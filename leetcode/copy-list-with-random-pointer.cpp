/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

#include <map>
using namespace std;

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) {
            return nullptr; // Handle the case of an empty list.
        }

        map<Node*, Node*> map;
        
        // Create a new head node.
        Node* new_head = new Node(head->val);
        map[head] = new_head;

        Node* present = new_head;
        Node* original_present = head;

        // Copy the next pointers.
        while (original_present->next != NULL) {
            Node* next_node = new Node(original_present->next->val);
            present->next = next_node;
            map[original_present->next] = next_node;
            present = present->next;
            original_present = original_present->next;
        }

        original_present = head;
        present = new_head;

        // Copy the random pointers.
        while (original_present != NULL) {
            if (original_present->random) {
                present->random = map[original_present->random];
            }
            present = present->next;
            original_present = original_present->next;
        }

        return new_head;
    }
};
