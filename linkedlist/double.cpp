class MyLinkedList {
private: 
  struct Node{
    int val;
    Node* prev;
    Node* next;
    Node(int value) : val(value), prev(nullptr) ,  next(nullptr) {}
 };

    Node* head;
    Node* tail;
 
public:
    MyLinkedList() {
        head = new Node(0);
        tail = new Node(0);
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int index) {
        Node* cur = head->next;
        while(cur != tail && index > 0){
            cur = cur->next;
            --index;
        }
        if(cur != tail && index == 0){
            return cur->val;
        }else{
            return -1;
        }
    }
    
    void addAtHead(int val) {
        Node* node = new Node(val);
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
    }
    
    void addAtTail(int val) {
        Node* node = new Node(val);
        node->prev = tail->prev;
        node->next = tail;
        tail->prev->next = node;
        tail->prev = node;
    }
    
    void addAtIndex(int index, int val) {
        Node* cur = head;
        while(cur != tail && index > 0 ){
            cur = cur->next;
            --index;
        }
        if(cur != tail && index == 0){
            Node* node = new Node(val);
            node->prev = cur;
            node->next = cur->next;
            cur->next->prev = node;
            cur->next = node;
        }
    }
    
    void deleteAtIndex(int index) {
         Node* cur = head->next;
        while(cur != tail && index> 0 ){
            cur = cur->next;
            --index;
        }
        if(cur != tail && index == 0){
            cur->prev->next =  cur->next;
            cur->next->prev = cur->prev;

        }
    }

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
