Root
Parent
Child
Siblings
Ancestors: Nodes accessible by following up the edges from a child node upwards are called the ancestors of that node
Descendants
Leaf/ External Node: Nodes which have no edge originating from it, and have no child attached to it
Internal node: Nodes with at least one child
Depth: Depth of a node is the number of edges from root to that node; root has depth = 0;
Height: Height of a node is the number of edges from that node to the deepest leaf
A tree having n nodes has n-1 edges
The degree of a node in a tree is the number of children of a node
The degree of a tree is the highest degree of a node among all the nodes present in the tree

BINARY TREE
A binary tree is a special type of tree where each node has a degree equal to or less than two, the number of children is less than 2

Types of Binary tree-
Full/Strict BT: Has nodes with a degree of 2 or 0. That is each of its nodes either have 2 children or is a leaf node
Perfect BT: All its internal nodes with degree strictly 2 and has all its leaf nodes on the same level
Complete BT: A complete binary tree has all its levels completely filled except possibly the last level. And if the last level is not completely filled then the last level s keys must be all left-aligned
Degenerate tree: Has just one child and that can be either to its left or right
Left/Right skewed trees: Every parent node has just a single child and that child should be strict to the left or to the right for all the parents
Representation: Array, Linked representation of BT (not Linked List representation as LL is a linear data structure). Doubly LL are used to achieve this representation

struct node{
    int data;
    int* left;
    int* right;
};
-----x-----x-----
PreOrder Traversal: The first node you start with is the root node. And thereafter you visit the left subtree and then the right subtree
PostOrder Traversal: First visit the left subtree, and then the right subtree. So, the last node you will visit is the root node
InOrder Traversal: Start with the left subtree, that is you first visit the left subtree, and then go to the root node and then you’ll visit the right subtree
-----x-----x-----
Binary Search tree
Left node smaller than root, right node greater than root, and no duplicate nodes
InOrder traversal of a binary search tree gives an ascending sorted array
Searching a key in a BST has time complexity = O(logn). Searching in a BST is similar to Binary search for array
The time complexity depends on the height of the BST and it is known that height of a tree ranges from logn to n; where n is the number of nodes
Hence the best case time complexity for searching in a BST is O(logn) and the worst case is O(n);
-----x-----x-----
AVL trees are height balanced binary search trees. Because most of the operations work on O(height), we would want the value of h to be minimum possible, which is logn
AVL is a type of BST
Height difference between the left and the right subtrees is less than 1 or equal in an AVL tree
For AVL trees, there is a balance factor BF, which is equal to the height of the left subtree subtracted from the height of the right subtree
For a balance tree to be considered an AVL tree, the value of |BF| should be less than or equal to 1 for each of the nodes, i.e., |BF|≤ 1
And even if some of the nodes in a binary search tree have a |BF| less than or equal to 1, those nodes are considered balanced. And if all the nodes are balanced, it becomes an AVL
Rotations are performed to avoid the unbalancing of a node caused by insertion
LL Rotation:
In this rotation technique, you just simply rotate your tree one time in the clockwise direction
RR Rotation:
In this rotation technique, you just simply rotate your tree one time in an anti-clockwise direction
LR Rotation:
First rotate the left subtree in the anticlockwise direction, and then the whole tree in the clockwise direction
RL Rotation:
The name RL, just because we inserted the new element to the left to the right subtree of the root. First rotate the right subtree in the clockwise direction, and then the whole tree in the anticlockwise direction
For Left-Left insertion - Right rotate once with respect to the first imbalance node
For Right-Right insertion - Left rotate once with respect to the first imbalance node
For Left-Right insertion - Left rotate once and then Right rotate once
For Right-Left insertion - Right rotate once and then Left rotate once