//// placenew1.cpp -- new, placement new, no delete
//#include<iostream>
//#include<string>
//#include<new>
//using namespace std;
//const int BUF = 512;
//class JustTesting
//{
//public:
//	JustTesting(const string&s = "Just Texting", int n = 0):words(s),number(n)
//	{
//		cout << words << " constructed" << endl;
//	}
//	~JustTesting();
//	void Show()const { cout << words << ", " << number << endl; }
//
//private:
//	string words;
//	int number;
//};
//JustTesting::~JustTesting()
//{
//	cout << words << " destroyed" << endl;
//}
//
//int main()
//{
//	char*buffer = new char[BUF];		// get a block of money
//
//	JustTesting *pc1, *pc2;
//
//	pc1 = new (buffer) JustTesting;		// place object in buffer
//	pc2 = new JustTesting("Heap1", 20);	// place object on heap
//
//	cout << "Memory block addresses:\n" << "buffer: "
//		<< (void*)buffer << "		heap: " << pc2 << endl;
//	cout << "Memory contents:\n";
//	cout << pc1 << ": ";
//	pc1->Show();
//	cout << pc2 << ": ";
//	pc2->Show();
//
//	JustTesting *pc3, *pc4;
//	pc3 = new(buffer)JustTesting("Bad Idea", 6);
//	pc4 = new JustTesting("Heap2", 10);
//
//	cout << "Memory contents:\n";
//	cout << pc3 << ": ";
//	pc3->Show();
//	cout << pc4 << ": ";
//	pc4->Show();
//
//	delete pc2;						// free Heap1
//	delete pc4;						// free Heap2
//	delete[]buffer;					// free buffer
//	cout << "Done" << endl;
//	return 0;
//}