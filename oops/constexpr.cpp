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
int x = 9;

// -------const expression-----------//

/* const expression is a expression which value can't be chaged once assigned and value assigned to it must be known at compile time */

// -----------constexpr function---------//

/* it is a fucntion  that is evaluated at compile time. parameter psssed to the function and return value must be literal (must be known at compile time.)*/

/* A call to a constexpr function produces the same result as a call to an equivalent non-constexpr function in all respects,
except that a call to a constexpr function can appear in a constant expression.*/

//----------constexpr  constructor-------//

/*can't  inherit v*/





class student {
public:
	char *name;
	int roll_no ;



};



void solve() {


// ----------constexpr variable---------//
	constexpr int x = 34; //valid constant expression as value assigned to it is constant(literal). and value can't be changed.

// constexpr int x = func()  //ok if func is constexpr function

	const int y = 10;

	constexpr int z = y; //error value assingned to it must be known at compile time and value of y is known when function solve is called from main (it is a runtime phenomena )
	cout << z << endl;




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



	constexpr int b = x;

	solve();


#ifndef ONLINE_JUDGE

	clock_t end = clock();
	cout << "\n\nExecuted In:  " << double(end - begin) / (CLOCKS_PER_SEC / 1000) << "ms" << endl;

#endif
	return 0;
}