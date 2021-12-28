/*Code : Reverse Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321 */

#include<iostream>
using namespace std;


int main(){
    int n ;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int val = i;               // each row starts with i and decreases till 1
        for(int j = 1; j <= i; j++){
            cout << val--;
        }
        cout << endl;

    }
  
}

