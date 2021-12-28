/*Number Pattern 2
Send Feedback
Print the following pattern
Pattern for N = 4
...1
..23
.345
4567
The dots represent spaces.*/
int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int val = i;
        for(int k = n - i; k >= 1; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << val++;
        }
        cout << endl;
    }
  
}

