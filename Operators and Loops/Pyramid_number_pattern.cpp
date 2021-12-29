/*Pyramid Number Pattern
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345*/
#include<iostream>
using namespace std;

int main(){

  // Write your code here 
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int val = i;
        for(int k = n - i; k > 0; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << val--;
        }
        val = 1;
        for(int j = 1; j <= i - 1; j++){
            cout << ++val;
        }
        cout << endl;
    }

  
}
