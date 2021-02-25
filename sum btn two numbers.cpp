#include <iostream>
using namespace std;

int recursiveSum(int m, int n) {
    if (m == n) {
        return n;//we add the last number to the running sum we have
    }
       
    else {
        return m + recursiveSum(m + 1, n); //we add on m to the answer, then m+1 then m+2 till we add on n.
        // return m + m+1 + m+2 + m+3 + ... + n
    }
}
int main()
{
    int m = 2, n = 4;
    cout << "sum = " << recursiveSum(m, n) << endl;

    //loop solution
    int sum = 0;
    for (int i = m; i <= n; i++) {
        sum += i;
    }
    cout << "sum is " << sum << endl;

    system("pause>0");
}

