
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
	
	foe.close();
    ally.close();
    return 0;
}
