#include "List.h"
#include "List.cpp"
#include"Scaner.h"

int main() {
	List<Scanner> L;

	L.push_front(Scanner("Canon",100000,"LFU","1280*640","Laser"));

	//cout << L.size() << endl;
	L.print();

	ifstream in_file("in.txt");
	if (!in_file) {
		cerr << "File open error" << endl;
	}
	else {
		while (!in_file.eof()) {
			
		}
	}
	system("pause");
	return 0;
}