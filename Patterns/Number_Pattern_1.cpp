// Time taken = 1 min
// Time complexity = O(n)
/* Number Pattern 1
Print the following pattern

Pattern for N = 4
1
23
345
4567

Input Format : N (Total no. of rows)
Output Format : Pattern in N lines */

// i varies along row and j varies along column for each i
#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int val = i;
        for(int j = 1; j <= i; j++){
            cout << val++;
        }
        cout << endl;
    }
  
}

