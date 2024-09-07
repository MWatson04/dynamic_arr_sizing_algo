#include <iostream>
#include <vector>

using namespace std;

struct Test {
	vector<int> a;
};

void changeArr(struct Test *t1) {
	for (int i = 0; i < 22; i++) {
		t1->a.at(i)++;
	}
}

int main() {
    struct Test t;
    	
    for (int i = 0; i < 22; i++) {
    	t.a.push_back(i + 1);
    	cout << t.a.at(i) << endl;
    }
    
    changeArr(&t);
    
    for (int i = 0; i < 22; i++) {
    	cout << t.a.at(i) << endl;
    }
}
