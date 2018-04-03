    typedef int T;
    struct LinkNode {
        T data;
        LinkNode* next;
    };
       struct LinkList {
        LinkNode* front;  // 指向头结点
        LinkNode* rear;   // 指向尾结点
        LinkNode* pre;    // 指向当前位置结点的前一个结点
        LinkNode* curr;   // 指向当前位置结点
        int position;     // 当前位子结点的编号
        int len;          // 线性表的大小（链表结点数）
    };
