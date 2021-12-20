
#include <fstream>

using namespace std;

int main() {
	ifstream foe("balance.in");
    ofstream ally("balance.out");

    int number;
    foe >> number;
	
	foe.close();
    ally.close();
    return 0;
}
