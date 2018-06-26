
#include <iostream>

using namespace std;

void permute(char p[], int n, int r, int pos) {
  if (pos == r) {
    for (int i=0; i < r; i++) {
      cout << p[i];
    }
    cout << endl;
    pos = 0;
    return;
  }
  for (int i=pos; i < n; i++) {
    swap(p[pos], p[i]);
    permute(p, n, r, pos+1);
  }
}

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
  permute(alphabets, n, r, 0);
  delete[] alphabets;
  return 0;
}
