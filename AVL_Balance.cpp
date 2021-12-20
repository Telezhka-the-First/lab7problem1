
#include <fstream>

using namespace std;

struct AVL_tree {
    int id;
    int left;
    int right;
    int balance;
};

int Count_Height(AVL_tree tree[], int id) {
    if (id == 0) return 0;
    int left_height  = Count_Height(tree, tree[id].left)  + 1;
    int right_height = Count_Height(tree, tree[id].right) + 1;
    tree[id].balance = right_height - left_height;
    return tree[id].balance > 0 ? right_height : left_height;
}

int main() {
	ifstream foe("balance.in");
    ofstream ally("balance.out");

    int number;
    foe >> number;
	number++;

    AVL_tree *tree = new AVL_tree[number * sizeof(AVL_tree)];
    
    for (int i = 1; i < number; i++) foe >> tree[i].id >> tree[i].left >> tree[i].right;
	
	Count_Height(tree, 1);
	
	foe.close();
    ally.close();
    return 0;
}
