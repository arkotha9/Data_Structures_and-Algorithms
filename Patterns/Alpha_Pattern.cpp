/*Code : Alpha Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC*/

#include<iostream>
using namespace std;


int main(){
    
// we are printing the charecters by adding i to 'A' and implicit type conversion to charecter.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch;
        }
        cout << endl;
    }
    
}
