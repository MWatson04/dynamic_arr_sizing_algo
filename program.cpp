#include <iostream>
#include <vector>

using namespace std;

class Test {
	private:
		vector<int> a;
	public:
		// Constructor
		Test();

		// Facilitator
		void changeArr();

		// Setter
		void set_vector(int num) {
			a.push_back(num);
		}

		// Getter
		int get_vector(int num) {
			return a.at(num);
		}

		// Destructor
		~Test();
};

Test::Test() {
	cout << "Constructor Called" << endl;
}

void Test::changeArr() {
	for (int i = 0; i < 20; i++) {
		a.at(i)++;
	}
}

Test::~Test() {
	cout << "Destructor Called" << endl;
}

int main() {
    Test t;
    	
    for (int i = 0; i < 20; i++) {
    	t.set_vector(i + 1);
    	cout << t.get_vector(i) << endl;
    }
    
    t.changeArr();
    
    for (int i = 0; i < 20; i++) {
    	cout << t.get_vector(i) << endl;
    }
}
