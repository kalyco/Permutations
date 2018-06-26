
#include <iostream>

using namespace std;

//void permute(P, n, r, result. pos) {
// string "abcd"
//
//}

int main()
{
  cout << "Number of chars (n): ";
  unsigned int n;
  cin >> n;
  char* alphabets = new char [n+1];
  cout << "Alphabets: ";
  cin >> alphabets;
  cout << "Number of alphabets in the permutations (r): ";
  unsigned int r;
  cin >> r;
  if (r > n) {
    cout << "r cannot be greater than n" << endl;
    exit(1);
  }
  cout  << "Permutations of " 
	<< alphabets 
	<< " taking " 
	<< r 
	<< " alphabets at a time." 
	<< endl;
  // Print the permutations of n alphabets taken r at a time

  

  return 0;
}
