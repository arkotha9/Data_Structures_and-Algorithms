/*Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5
..*
.***
*****
.***
..*

The dots represent spaces.*/

#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    int N = (n + 1)/2;
    for(int i = 0; i < N; i++){
        for(int k = N - i - 1; k >=1; k--){
            cout << " ";
        }
        for(int j = 1; j <= (2*i + 1); j++){
            cout << "*";
        }
        cout << endl;
    }
    N = N - 1;
    for(int i = N - 1; i >= 0; i--){
        for(int k = N - i - 1; k >= 0; k--){
            cout << " ";
        }
        for(int j = 1; j <= (2*i + 1); j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
