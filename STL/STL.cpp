#include <iostream>
#include <set>
using namespace std;

int main()
{

    // multiset is also a set which is used to store the values but unlike set
    // it allows duplicates and sort the elements in ascending

    // It takes logn time for insertion , deletion , search

    multiset<int> s;

    s.insert(50);
    s.insert(40);

    for (int x : s)
    {
        cout << x << " ";
    }

    /*
    It’s similar to unordered_map, but allows multiple elements with the same key (like multimap but unordered).

It uses a hash table, so average time complexity for operations is constant (O(1)), 
although worst-case can degrade to O(n) if there are many hash collisions.
*/

    // Multimap
    // Unordered set

    // Deque
    // In C++, deque (double-ended queue) is a sequence container that allows fast insertion and deletion at both the front and the back
    // It is defined in <deque> header file

    /*
    Allows fast insert/remove at both ends (O(1)).

Random access is allowed (like vectors): O(1) access with [] or at().

Grows dynamically.

Typically implemented as a set of chunks, not a contiguous block like a vector.*/


    /*
    In C++, list is a container in the STL that implements a doubly linked list.

Unlike vector and deque, a list does not support random access, but it allows fast insertions and deletions anywhere in the list, especially at the beginning or middle.


Doubly linked list (each node points to previous and next).

Fast insertion/deletion anywhere (O(1) if you have the iterator).

No random access (list[i] is not valid).

Can be iterated forward and backward.

Efficient splicing, sorting, and merging operations




__builtin_popcount is a GCC/Clang compiler intrinsic used to count the number of set bits (1s) in the binary representation of an integer.


*/

    unsigned int x = 29; // Binary: 11101
    cout << "Number of set bits: " << __builtin_popcount(x) << "\n";

    return 0;
}