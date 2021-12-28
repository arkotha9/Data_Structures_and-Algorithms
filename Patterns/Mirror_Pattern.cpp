/*Code : Mirror Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4

. . .1
. . 1 2
. 1 2 3
1 2 3 4 */
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int k = n - i; k > 0; k--){
            cout  << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
  
}
