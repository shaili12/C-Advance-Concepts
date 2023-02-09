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

// const member function is a function that doesn't modify instance variable i.e readonly function.

// const memeber function can be accessed by both const or non const objects;

// const object is a object which can't be modified furthur.

//const object can oly call non const meber function as it gaurantees not to change the instance variable .

// const and non-static data member must be inilized in constructor using initializer list




class student {

public:
	string name;
	int roll_no ;
	const string clg_name;

	student(string name, int roll_no, string clg_name): clg_name(clg_name) {

		this->name = name;
		this->roll_no = roll_no;
		// this->clg_name = clg_name; // gives error..use initializer list to initialize const data member

	}

	void display()const {
		cout << "name: " << this->name << " " << "roll_no: " << this->roll_no << " " << "clg_name: " << clg_name << endl;
		cout << endl;
	}

	string getName() {
		return this->name;
	}

	int getroll_no() {
		return this->roll_no;
	}


};



void solve() {

	const student obj = student("shaili", 19253, "KNIT Sultanpur");
	student obj1 = student("disha", 19424, "KNIT Sultanpur");

	obj.display(); //valid...const object can access const member function

	// obj.getName(); //invalid ... const object can't access non const member functions

	obj1.display(); //valid

	cout << obj1.getName() << endl; //valid







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