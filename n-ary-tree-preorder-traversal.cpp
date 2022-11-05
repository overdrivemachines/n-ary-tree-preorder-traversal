#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Definition for a Node.
class Node {
 public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val) {
    val = _val;
  }

  Node(int _val, vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};

Node *createTree(vector<int> input);
vector<int> preorder(Node *root);

int main(int argc, char const *argv[]) {
  vector<int> input1 = {1, NULL, 3, 2, 4, NULL, 5, 6};
  vector<int> input2 = {1, NULL, 2, 3, 4, 5, NULL, NULL, 6, 7, NULL, 8, NULL, 9, 10, NULL, NULL, 11, NULL, 12, NULL, 13, NULL, NULL, 14};

  // Node *tree_root1 = createTree(input1);
  Node *tree_root2 = createTree(input2);

    return 0;
}

vector<int> preorder(Node *root) {
  vector<int> pre;
  return pre;
}

// Create n-ary tree
// returns pointer to root
Node *createTree(vector<int> input) {
  queue<Node *> nodes;
  Node *node, *parent, *root;

  if (input.size() == 0) {
    return nullptr;
  }

  root = new Node(input[0]);

  if (input.size() == 1) {
    return root;
  }

  parent = root;
  for (int i = 2; i < input.size(); i++) {
    if (input[i] != NULL) {
      node = new Node(input[i]);
      nodes.push(node);
      parent->children.push_back(node);
      cout << "adding " << node->val << " to " << parent->val << endl;
    } else {
      parent = nodes.front();
      nodes.pop();
    }
  }
}