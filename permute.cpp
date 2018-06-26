
#include <iostream>

using namespace std;


// p = string to permute
// n = number of chars
// r = permutation size
// result = final result
// pos = index position for result (might not be necessary)

void permute(char p[], int n, int r, char result[], int pos) {
  if (n == 0) {
    cout << "result: " << result << endl;
    pos = 0;
    return;
  }
  for (int i=0; i < n; i++) {
    char pNew[n];
    strncpy(pNew, p, n);
    result[pos] = pNew[pos];
    pNew[0] = pNew[1];
    pNew[n] = '\0';
    permute(pNew, n-1, r-1, result, pos+1);
  }
}

int main()
{
  cout << "Number of chars (n): ";
  unsigned int n;
  cin >> n;
  cout << n << endl;
  char* alphabets = new char [n+1];
  cout << "Alphabets: ";
  cin >> alphabets;
  cout << alphabets << endl;
  cout << "Number of alphabets in the permutations (r): ";
  unsigned int r;
  cin >> r;
  cout << r << endl;
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
  char result[3];
  // Print the permutations of n alphabets taken r at a time
  permute(alphabets, n, r, result, 0);
  delete[] alphabets;
  return 0;
}
