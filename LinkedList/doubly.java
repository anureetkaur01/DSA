class BST {
    class Node {
        int key;
        Node left, right;
        Node(int data) { key = data; }
    }

    Node root;

    // Insert
    Node insert(Node root, int key) {
        if (root == null) return new Node(key);
        if (key < root.key) root.left = insert(root.left, key);
        else if (key > root.key) root.right = insert(root.right, key);
        return root;
    }

    void insert(int key) { root = insert(root, key); }

    // Search
    boolean search(Node root, int key) {
        if (root == null) return false;
        if (root.key == key) return true;
        return key < root.key ? search(root.left, key) : search(root.right, key);
    }

    boolean search(int key) { return search(root, key); }

    // Delete
    Node delete(Node root, int key) {
        if (root == null) return null;

        if (key < root.key) root.left = delete(root.left, key);
        else if (key > root.key) root.right = delete(root.right, key);
        else {
            // Node with one or no child
            if (root.left == null) return root.right;
            else if (root.right == null) return root.left;

            // Node with two children → inorder successor
            root.key = minValue(root.right);
            root.right = delete(root.right, root.key);
        }
        return root;
    }

    void delete(int key) { root = delete(root, key); }

    int minValue(Node root) {
        while (root.left != null) root = root.left;
        return root.key;
    }

    // Traversals
    void inorder(Node root) {
        if (root != null) {
            inorder(root.left);
            System.out.print(root.key + " ");
            inorder(root.right);
        }
    }

    void preorder(Node root) {
        if (root != null) {
            System.out.print(root.key + " ");
            preorder(root.left);
            preorder(root.right);
        }
    }

    void postorder(Node root) {
        if (root != null) {
            postorder(root.left);
            postorder(root.right);
            System.out.print(root.key + " ");
        }
    }

    // Driver
    public static void main(String[] args) {
        BST tree = new BST();
        int[] keys = {50, 30, 20, 40, 70, 60, 80};

        for (int k : keys) tree.insert(k);

        System.out.print("Inorder: "); tree.inorder(tree.root); System.out.println();
        System.out.print("Preorder: "); tree.preorder(tree.root); System.out.println();
        System.out.print("Postorder: "); tree.postorder(tree.root); System.out.println();

        System.out.println("Search 40: " + tree.search(40)); // true
        tree.delete(20); // leaf
        tree.delete(30); // one child
        tree.delete(50); // two children

        System.out.print("Inorder after deletion: "); tree.inorder(tree.root);
    }
}
