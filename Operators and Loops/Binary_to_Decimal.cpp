/*#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x;
    cin >> x;
    int term = 5;
    while(x--){
        if(term % 4 != 0) cout << term << " ";
        else x++;
        term += 3;
        
    }
}
*/

//two ways - read as string and do it ; read as a number and do it
//1) string
#include<iostream>
#include<string>
using namespace std;

int main() {
	// Write your code here
    string s;
    getline(cin,s);
    int digits = s.length();
    long num = 0;
    for(int i = 0; i < digits; i++){
        int a;
        if(s[i] == '1') a = 1;
        else a = 0;
        num = num*2 + a;

    }
    cout << num;	
}

// 2nd way

#include <iostream>
int main(){
  long n;
  cin >> n;
  int num = 0;
  int val = 1;
  while(n){
    int ld = n % 10;
    num = num + ld*val; // last digit multipled by 2^0
    val = val*2;
    n = n/10;
  }
  cout << num;
}
