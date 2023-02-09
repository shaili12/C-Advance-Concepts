#include<bits/stdc++.h>
#include<stdlib.h>
#include<algorithm>
#include<unistd.h>
#include<climits>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define endl '\n'
#define pb push_back
#define lbnd lower_bound
#define ubnd upper_bound
#define x first
#define y second
// numeric_limits<data_type>::max()
#define mod 1000000007
//_________________//;
#define MAX 100005
#define e 1000000000

// constructor---is a special method that has same name as class name . it doesn't have any return type

// constructor can be overloaded i.e more than one constructor is possible inside a class.

// constructor overloading is not possible.

//  constructor can't we static, virtual, const etc.

// only inline keyword can be used with the constructor

// a constructor can be private, but it is generally wriitten inside the public section.

// a copy constructor can be made private . when we make copy constructor private in a class, objects of that class become non-copyable.

class student {

public:

	string name;
	int roll_no ;
	int *marks;

	// 1. default constructor
	//compiler provides default construct if we don't specify constructor expilicitly.
	student() {}

	// but parameterized constructor override the default constructor
	// 2. parameterized costructor
	student(string name, int roll_no, int m[], int n ) {
		this->name = name;
		this->roll_no = roll_no;
		this->marks = new int[n];
		for (int i = 0; i < n; i++) {
			this->marks[i] = m[i];
		}
	}

	student(string name) {

		this->name = name;
		this->roll_no = -1;
		this->marks = NULL;

	}

	// 3.copy constructor
	// copy constructor is a constructor that initializes an object using another object at the time of its creation.
	// copy constructor takes reference to an object of the same class  as argument.
	// object that is passed to copy constructor must be passed by reference and should be const (i.e const classname &obj).



	// shallow copy

	// student(const student &obj) {

	// 	this->name = obj.name;
	// 	this->roll_no = obj.roll_no;
	// 	this->marks = obj.marks;
	// }

	// deep copy

	student(const student &obj) {

		this->name = obj.name;
		this->roll_no = obj.roll_no;
		this->marks = new int[5];
		for (int i = 0; i < 5; i++) {
			this->marks[i] = obj.marks[i];
		}
	}

	void display(int n) {

		cout << "name:" << " " << this->name << endl;
		cout << "roll_no:" << " " << this->roll_no << endl;
		cout << "marks:" << " ";
		for (int i = 0; i < n; i++) {
			cout << marks[i] << " ";
		}
		cout << endl;


	}

};



void solve() {

	int marks[] = {100, 90, 57, 87, 96};

	int n = 5;

	student obj = student("shaili", 19253, marks, 5);

	student obj1(obj); //copy constructor is called

	cout << "details of obj" << endl;
	obj.display(n);

	cout << "details of object obj1" << endl;
	obj1.display(n);

	obj.marks[0] = 101;

	cout << "details of object obj after the modification of makrs" << endl;
	obj.display(n);


	cout << "details of object obj1" << endl;
	obj1.display(n);


	student obj2 = obj; //copy constructor is called


	student obj3; //assignment operator is called rather that copy constructor.

	obj3 = obj;



}


//main function
int main() {

	ios;
	clock_t begin = clock();
#ifndef ONLINE_JUDGE

	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output to output.txt
	freopen("output.txt", "w", stdout);

#endif

	//code here



	solve();


#ifndef ONLINE_JUDGE

	clock_t end = clock();
	cout << "\n\nExecuted In:  " << double(end - begin) / (CLOCKS_PER_SEC / 1000) << "ms" << endl;

#endif
	return 0;
}