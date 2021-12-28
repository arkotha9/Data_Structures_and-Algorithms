/*Count Characters
Send Feedback
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
Sample Input :
abc def4 5$
Sample Output :
6 2 2 */

#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int c_ch, c_digits,c_ws;
    c_ch = c_digits = c_ws = 0;
    char ch = cin.get();
    while(ch != '$'){
        if(ch >= 'a' && ch <= 'z'){
            c_ch++;
        }
        else if(ch >= '0' && ch <= '9') c_digits++;
        else c_ws++;
        ch = cin.get();
    }
    cout << c_ch << " " << c_digits << " " << c_ws;
  
}
