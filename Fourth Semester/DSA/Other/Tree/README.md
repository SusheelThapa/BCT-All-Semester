# Trees

A tree is a data structure similar to the linked list but instead of each node pointing simply to the next node in a linear fashion, each node points to a number of nodes. Tree is an example of a non-linear data structure. A tree structure is a way of representing the hierarchical nature of a structure in a graphical form.

## Important Point

Root: Top most Node
Parent: Node which connnect to the child
Child: Node which is connected by another node in its child
Leaf/External: Node with no children
Internal: Nodes with atleast one child
Depth: No. of edges from the root to the node
Height: No of edges from node to deepest leaf
Sibiling: Child of same parent.
Level: Set of node with same depth are said to be in same level

## Binary Tree

A tree is called _binary tree_ if each node has at most two child.

### Types of binary tree

1. Strict Binary Tree
   A binary tree is called _strict binary tree_ if each node has exactly two children or no children

2. Full Binary Tree
   A binary tree is called _full binary tree_ if each node has exactly two children and all leaf nodes are at the same level.

3. Complete Binary Tree
4. Degenerate Tree
   A binary tree is called _degenerate tree_ if every parent have exactly one child.

5. Skewed Tree
   - Left-Skewed : All the nodes are towards left
   - Right-Skewed : All the nodes are towards right

### Properties of Binary Tree

- Number of nodes in full binary tree is 2<sup>h+1</sup> -1.
- Number of leaf nodes in full binary tree is 2<sup>h</sup>.

### Structure of Binary Tree

Since binary tree is made by collective summation of node.
And node had tow things to do: - Store data - Point to child node

But in binary tree at most it has two child node so we need two pointer that will points to two child.

```C
Implementation in C
struct Node
{
    struct Node *left_node;
    int data;
    struct Node *right_node;
}Node;
```

### Operations in Binary Trees

#### Basic Operations

- Inserting an element into a tree
- Deleting an element from a tree
- Searching for an element
- Traversing the tree

#### Auxillary Operations

- Finding the size of the tree
- Finding the height of the tree
- Finding the level which has maximum sum
- Finding the least common ancestor(LCA) for a given pair of nodes, and many more.

#### Binary Tree Traversal

The process of visiting all the node present in the is called _traversal_.

##### Types of Traversal

- Preorder Traversal
  Visit the root.
  Traverse the left subtree in Preorder
  Traverse the right subtree in Preorder
- Inorder Traversal
  Visit the root.
  Traverse the left subtree in Preorder
  Traverse the right subtree in Preorder
- Postorder Traversal
  Visit the root.
  Traverse the left subtree in Preorder
  Traverse the right subtree in Preorder

  It can be acheived in both way **Recursive** and **Non-recursive** ways.

Another method of traversal doesn't depend on above orders. It is :

- Level Order Traversal: This method is based on Breadth First Traversal(BFS of graph algorithms)
  Visit the root.
  While traversing level _x_, keep all the elements at level _x+1_ in queue,
  Go to the next level and visit all the nodes at that level.
  Repeat this until all level are completed.
