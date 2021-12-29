/*Second Largest
Send Feedback
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3*/
#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin >> n;
    int maxi, s_maxi;
    cin >> maxi;
    s_maxi = INT_MIN;
    if(n < 2){
        cout << s_maxi;
    }
    else{
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if(a > maxi){
            s_maxi = maxi;
            maxi = a;
        }
        else if(a == maxi) continue;
        else{
            if(a == s_maxi) continue;
            else if( a > s_maxi) s_maxi = a;
            else continue;
        }
    }
    cout << s_maxi;
    
    }  
}
