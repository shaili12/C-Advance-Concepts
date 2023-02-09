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
// #define x first
#define y second
// numeric_limits<data_type>::max()
#define mod 1000000007
//_________________//;
#define MAX 100005
#define e 1000000000

// static variable have a property of preserving their value enev after they are out of their scope.
// it means they get memory once and remains throughout the whole prpgram.
// static variable are allocated memory in data segment, not in stack segment.
// default value of static varible is '0'(zero)if they are not initialized explicitly;


// ---------static data member----------//

/*Static data members are not associated with any object. They exist even if no objects of the class have been defined.
 There is only one instance of the static data member in the entire program with static storage duration*/

// static data member can be accessed by with or without object of class (student::clg_name)
// there is only one copy of static data member, all the object share that memory location. changes made in static variable will reflect to every object.

// ----------static method-----------//

//static method doesn't conation "this" pointer.
// static method can't use instance variable and non-static methods as it has not "this" pointer.

// Static member functions cannot be virtual, const, volatile.
// static method can't be virtual or const as it doesn't belong to object. it has no contains this pointer.
//A const method make this pointer constant (something like this const int * const ptr) and static method has not any this ponter.




class person {

	string gender;
};

class student {

private:
	static int dummy;
	int d = 0;

public:
	string name;
	int roll_no ;
	static string clg_name; //only declaration is done by this line. we need to define the variable just after the class declaration
	// static student var; // only declaration
	// static person p;//only declaration
	// person pp;
	const static int year = 4; //const static data member can be intitialized within the class like this, but the initialization of non-const static data member



	student() {
		this->name = "shaili";
		this->roll_no = 19253;
		// this->pp = person();
	}

	static void fun() {
		cout << "I am A static method" << endl;
		// cout << this->name << endl; // error: static method can't make use of instance variable

		cout << clg_name << endl; //but static data member can be accessed;


	}





};

// const int student::year = 4;

int student::dummy = 7; // gives no error even it is in present in private section of class because here we are not accessing the variable ,only initializing it.

string student::clg_name = "KNIT Sultanpur"; // definition of static varialbe clg_name

// student student ::var = student(); // definition of static variable var

// person student::p = person(); //definition of static variable var




int fun() {

	static  int i;
	if (i > 8) return i;
	i++;
	cout << i << endl;
	return i + fun();

	// 1+2+3+4+...+9+9(value return by fun() when (i=9)>8 1.e base case occurs);
}


void solve() {


	static int x = 2;
	cout << x  << endl;
	// cout << fun() << endl;


	// ------static data member-----------//

	student obj = student();

	cout << student::clg_name << endl; //can be access  with class name using scope resolution operator(::).

	cout << obj.clg_name << endl; // it can be accesses by the object as well;

	// cout << student::var.name << " " << student::var.roll_no << " " << student::var.clg_name << endl;

	obj.clg_name = "KNIT Sultanpur U.P 228118";

	cout << student::clg_name << " " << obj.clg_name << endl;

	cout << &student::clg_name << " " << &obj.clg_name << endl;

	student::clg_name = "KNIT Sultanpur U.P India" ;

	cout << student::clg_name << "---" << obj.clg_name << endl;

	// cout << student::dummy << endl; // error:can't be access because it is declared inside private section of class;


// --------------static method---------------------//

	student::fun();









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