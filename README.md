## Permutation process (recursive)

* p = chars to permute
* n = number of chars in string
* r = permutation char size
* result = final result
* pos = index position for result
* finalArr = array of array of the char permutations

Input is string of chars, let's say `'abc'`

1. establish base case: `(n == 0) return;`  
2. Set up `for` loop based on length of `n`
3. inside `for` loop, create a copy var `char` p -- `pCopy` (`abc`)
4. until pCopy is null, pop off first letter from `pCopy` ('a') and store it as the first index of the results array
5. when result is complete, push it into the array
6. 

example: 
p = 'abc'
n = 3
r = 2
result = char[3]
pos = 0
arr = poinst * char

// first pass
void permute(p, n, r, result, pos, arr) {
	char pCopy = p;
	if (result.length == r) {
		arr << result;
		pos = 0;
		return;
	}	
	for (int i =0; i < n; i++) {
		result[i] = p.pop();
		permute(p, n--, r--, result, pos++, arr);
	}
}