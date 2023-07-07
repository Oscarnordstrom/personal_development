#include <string>

class TreeNode {
private:
  std::string value;
  int count;
  TreeNode *left;
  TreeNode *right;

public:
  // Default constructor
  TreeNode() : value(""), count(0), left(nullptr), right(nullptr) {}

  // Constructor with value and count
  TreeNode(const std::string &val, int cnt)
      : value(val), count(cnt), left(nullptr), right(nullptr) {}

  // Copy constructor
  TreeNode(const TreeNode &other)
      : value(other.value), count(other.count), left(nullptr), right(nullptr) {
    if (other.left)
      left = new TreeNode(*other.left);
    if (other.right)
      right = new TreeNode(*other.right);
  }

  // Copy assignment operator
  TreeNode &operator=(const TreeNode &other) {
    if (this != &other) {
      value = other.value;
      count = other.count;

      delete left;
      delete right;

      if (other.left)
        left = new TreeNode(*other.left);
      else
        left = nullptr;

      if (other.right)
        right = new TreeNode(*other.right);
      else
        right = nullptr;
    }
    return *this;
  }

  // Destructor
  ~TreeNode() {
    delete left;
    delete right;
  }
};

class BinStrTree {
private:
  TreeNode *root;

public:
  // Default constructor
  BinStrTree() : root(nullptr) {}

  // Copy constructor
  BinStrTree(const BinStrTree &other) : root(nullptr) {
    if (other.root)
      root = new TreeNode(*other.root);
  }

  // Copy assignment operator
  BinStrTree &operator=(const BinStrTree &other) {
    if (this != &other) {
      delete root;
      root = nullptr;

      if (other.root)
        root = new TreeNode(*other.root);
    }
    return *this;
  }

  // Destructor
  ~BinStrTree() { delete root; }
};

int main() {}