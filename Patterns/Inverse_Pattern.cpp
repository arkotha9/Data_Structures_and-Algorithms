/*Inverted Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
  
}
