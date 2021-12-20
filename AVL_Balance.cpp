
#include <fstream>

using namespace std;

struct AVL_tree {
    int id;
    int left;
    int right;
    int balance;
};

int main() {
	ifstream foe("balance.in");
    ofstream ally("balance.out");

    int number;
    foe >> number;
	number++;

    AVL_tree *tree = new AVL_tree[number * sizeof(AVL_tree)];
	
	for (int i = 1; i < number; i++) foe >> tree[i].id >> tree[i].left >> tree[i].right;
	
	foe.close();
    ally.close();
    return 0;
}
