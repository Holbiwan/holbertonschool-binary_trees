# **C - Binary trees**

### **What is Binary Tree Data Structure?**:deciduous_tree:

![binary_trees](https://i.pinimg.com/originals/c6/bb/08/c6bb08543696246a36c1d33438919afb.gif)

![This is an image](https://zupimages.net/up/23/37/f65b.png)

A binary tree is a data structure composed of nodes, where each node has at most two children: a left child and a right child. The top node is called the root, and nodes in the tree have parent-child relationships.

Binary trees are used for various purposes in computer science, including efficient searching (in the case of Binary Search Trees), representing mathematical expressions, implementing priority queues, and more. 

They can be traversed in different orders, such as in-order, pre-order, and post-order, depending on the specific task or algorithm. Binary trees are fundamental to many data structures and algorithms in computer science.is NULL. Each node of a Binary Tree contains the following parts:

```
### **Requirements** :warning:
```

* Command to clone our program

```git clone https://github.com/Holbiwan/holbertonschool-binary_trees.git```

* Link to print function

```https://github.com/hs-hq/0x1C.c/blob/main/binary_tree_print.c```

### **Tasks** :joystick:

Files / Tasks | Description
----- | -----------
[`0-binary_tree_node.c`](./0-binary_tree_node.c) | Function that creates a binary tree node
[`1-binary_tree_insert_left.c`](./1-binary_tree_insert_left.c) | Function that inserts a node as the left-child of another node
[`2-binary_tree_insert_right.c`](./2-binary_tree_insert_right.c) | Function that inserts a node as the right-child of another node
[`3-binary_tree_delete.c`](./3-binary_tree_delete.c) | Function that deletes an entire binary tree
[`4-binary_tree_is_leaf.c`](./4-binary_tree_is_leaf.c) | Function that checks if a node is a leaf
[`5-binary_tree_is_root.c`](./5-binary_tree_is_root.c) | Function that checks if a given node is a root
[`6-binary_tree_preorder.c`](./6-binary_tree_preorder.c) | Function that goes through a binary tree using pre-order traversal
[`7-binary_tree_inorder.c`](./7-binary_tree_inorder.c) | Function that goes through a binary tree using in-order traversal
[`8-binary_tree_postorder.c`](./8-binary_tree_postorder.c) | Function that goes through a binary tree using post-order traversal
[`9-binary_tree_height.c`](./9-binary_tree_height.c) | Function that measures the height of a binary tree
[`10-binary_tree_depth.c`](./10-binary_tree_depth.c) | Function that measures the depth of a node in a binary tree
[`11-binary_tree_size.c`](./11-binary_tree_size.c) | Function that measures the size of a binary tree
[`12-binary_tree_leaves.c`](./12-binary_tree_leaves.c) | Function that counts the leaves in a binary tree
[`13-binary_tree_nodes.c`](./13-binary_tree_nodes.c) | Function that counts the nodes with at least 1 child in a binary tree
[`14-binary_tree_balance.c`](./14-binary_tree_balance.c) | Function that measures the balance factor of a binary tree
[`15-binary_tree_is_full.c`](./15-binary_tree_is_full.c) | Function that checks if a binary tree is full
[`16-binary_tree_is_perfect.c`](./16-binary_tree_is_perfect.c) | Function that checks if a binary tree is perfect
[`17-binary_tree_sibling.c`](./17-binary_tree_sibling.c) | Function that finds the sibling of a node
[`18-binary_tree_uncle.c`](./18-binary_tree_uncle.c) | Function that finds the uncle of a node


### **Compilation** :fast_forward:


|Task| Adding the main.c file concerned right after **gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c**
|----|-------------------------------------------------------------------------------------------------        |
|0   |0-main.c 0-binary_tree_node.c -o 0-node                                                                  |
|1   |1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left	                               |                                           
|2   |2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right                                    |	     						                                                          
|3   |3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o                     |
|4   |4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf                                     |                             
|5   |5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o                    |
|6   |6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre				               |				                                                     
|7   |7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in				               |				
|8   |8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post                                        |          
|9   |9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-heigh                                    |
|10  |10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth                                  |				                         
|11  |11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size                                   |
|12  |12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves                                 |
|13  |13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes                                  | 
|14  |14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance    |
|15  |15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full				       |
|16  |16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect                                |
|17  |17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling                                    |                                                
|18  |18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle                                        |        

                  
## **Authors** :writing_hand:

* **Claudine SILLAM** - [Github](https://github.com/Coconuts-del)
* **Sabrina PAPEAU** - [Github](https://github.com/Holbiwan)
* **Jean-Luc BILO** - [Github](https://github.com/Luckisback)
