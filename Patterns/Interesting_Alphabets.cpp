/*Code : Interesting Alphabets
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        char ch = 'A' + n - i;
        for(int j = 1; j <= i; j++){
            cout << ch++;
        }
        cout << endl;
    }
    
}
