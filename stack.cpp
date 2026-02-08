/*
=====================================================
STACK in C++ STL
=====================================================

Definition:
Stack is a LIFO (Last In First Out) data structure.

Insertion and deletion both happen from the top.

Last element added is removed first.

=====================================================
TIME COMPLEXITY
=====================================================

push      → O(1)
pop       → O(1)
top       → O(1)
size      → O(1)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)

=====================================================
IMPORTANT FUNCTIONS
=====================================================

push(x)     → insert element
pop()       → remove top element
top()       → access top element
size()      → number of elements
empty()     → check if empty
emplace(x)  → efficient insertion

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

// helper function to print stack
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {

    stack<int> s;

    // push elements
    for (int i = 1; i <= 5; i++)
        s.push(i);

    cout << "Stack elements: ";
    printStack(s);

    cout << "Size: " << s.size() << endl;
    cout << "Top: " << s.top() << endl;

    // pop
    s.pop();

    cout << "After pop: ";
    printStack(s);

    return 0;
}

/*
=====================================================
WHEN TO USE stack
=====================================================

✔ recursion simulation
✔ undo operations
✔ expression evaluation
✔ DFS traversal
✔ backtracking

Use queue for FIFO behavior
=====================================================
*/
