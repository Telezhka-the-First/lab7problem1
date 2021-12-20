
#include <iostream>
#include <fstream>

using namespace std;

struct AVL_tree {
    int id;
    int left;
    int right;
    int balance;
};

int main() {

	cout << "Hello world!";
	
	ifstream foe("balance.in");
    ofstream ally("balance.out");

    int number;
    foe >> number;
	
	foe.close();
    ally.close();
    return 0;
}
