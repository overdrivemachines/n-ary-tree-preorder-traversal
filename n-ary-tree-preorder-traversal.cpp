#include <iostream>
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

vector<int> preorder(Node *root);

int main(int argc, char const *argv[]) {
  return 0;
}

vector<int> preorder(Node *root) {
}