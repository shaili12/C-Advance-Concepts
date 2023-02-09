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

// Destructor- Destructor is a function that is called automatically when a object goes out of scope or delete operator is used on an object that is created dynamically
// destructor is a memeber function that has same name as class name without any argument or any return type
// destrutor must be defined in public section of a class
// destructor can't be overloaded i.e multiple destructor is not possible
// destructor can be virtual
// destructor can't be static or const
// destructor can be pure virtual
// destructor can be called explicitaly like this "object.~destructor()"
// objects are destroyed in the reverse order of its creation i.e destructor is called first for the object that is created last(most recent)


// ---- when we need user defined destructor-----
//ans- compiler provide a default constructor but we must define our own destructor if class contains and dynamicaly allocated data(i.e any poiter data member)
//destructor is called whenever a object goes out of scope or delete operator is used on an object;


class student {

public:
	string name;
	int roll_no;
	int *marks;

	student(string name, int roll_no, int marks) {
		this->name = name;
		this->roll_no = roll_no;
		this->marks = new int;
		*(this->marks) = marks;
	}

	void display() {
		cout << "name: " << this->name << endl;
		cout << "roll_no: " << this->roll_no << endl;
		cout << "marks: " << *(this->marks) << endl;

		cout << endl;
	}
	~student() {
		delete marks;
		cout << "destructor called" << endl;
	}


};



void solve() {

	student obj = student("shaili", 19253, 567);
	cout << "details of obj - " << endl;
	obj.display();

	student *obj1 = new student("disha", 19424, 678);

	delete obj1; // it does two things calls the destructor and it deallocate the memory.

	// obj1->~student(); constructor can be called expilicitly like this. but it does delete memory pointed by the obj1. ony deletes memory poinetd by the data member marks;

	student obj2 = student("nandini", 19235, 345);


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