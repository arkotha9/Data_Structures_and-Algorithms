/* Code : Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4
...1
..232
.34543
4567654
The dots represent space */

//I have 2 solutions

#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int val = i;
        for(int k = n - i; k > 0; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout<< val++;
        }
        val = val - 2;
        while(val >= i){
            cout << val--;
        }
        cout << endl;
        
    }
    
}


// Second
#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val = i + 1;
        for(int k = n - i - 1; k >= 1; k--){
            cout << " ";
        }
        for(int j = 1; j <= (2*i + 1); j++){
            cout << val;
            if(val == 2*i + 1){
                break;
            }
            else val++;
        }
        while(val > i+1){
            val--;
            cout << val;
        }
        cout << endl;
    }
    
    
}
