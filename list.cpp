/*
=====================================================
LIST in C++ STL
=====================================================

Definition:
list is a doubly linked list container.

Elements are NOT stored contiguously.

Allows fast insertion and deletion anywhere.

Bidirectional iteration supported.

=====================================================
TIME COMPLEXITY
=====================================================

push_front     → O(1)
push_back      → O(1)
pop_front      → O(1)
pop_back       → O(1)
insert         → O(1) (with iterator)
erase          → O(1) (with iterator)
access [i]     → O(n)
iteration      → O(n)
sort           → O(n log n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n) + pointer overhead

=====================================================
IMPORTANT FUNCTIONS
=====================================================

push_back(x)      → insert at end
push_front(x)     → insert at front
pop_back()        → remove last
pop_front()       → remove first
front()           → first element
back()            → last element
reverse()         → reverse list
sort()            → sort list
size()            → number of elements
empty()           → check if empty
clear()           → delete all elements
erase(it)         → erase at iterator

Other functions:
begin(), end()
cbegin(), cend()
rbegin(), rend()
emplace_front()
emplace_back()
max_size()

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

// helper function
void printList(list<int> li) {
    for (int x : li) cout << x << " ";
    cout << endl;
}

int main() {

    list<int> li;

    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);

    cout << "List elements: ";
    printList(li);

    li.reverse();
    cout << "After reverse: ";
    printList(li);

    li.sort();
    cout << "After sort: ";
    printList(li);

    cout << "Size: " << li.size() << endl;
    cout << "Front: " << li.front() << endl;

    li.pop_front();
    cout << "After pop_front: ";
    printList(li);

    cout << "Back: " << li.back() << endl;

    li.pop_back();
    cout << "After pop_back: ";
    printList(li);

    return 0;
}

/*
=====================================================
WHEN TO USE list
=====================================================

✔ frequent insert/delete in middle
✔ linked list behavior
✔ iterator stability required

Avoid when random access needed → use vector
=====================================================
*/
