#include <iostream>

using namespace std;

int main() {
    int pattern[200][200] ;
    int i, j, m, n, p, q, hang, cot, num;
    cin >> hang >>cot;
    num = 1;
    i = 1;
    j = 1;
    m = 1;
    n = hang ;
    p = 1;
    q = cot ;
    int k=hang*cot;
    while (num <= k) {
            if(num==k+1)break;
        for (j = p; j <= q; j++) {
            pattern[m][j] = num;
            num++;
    if(num==k+1)break;
        }
        if(num==k)break;
        m++;
        for (i = m; i <= n; i++) {
            pattern[i][q] = num;
            num++;if(num==k+1)break;
        }if(num==k+1)break;
        q--;
        for (j = q; j >= p; j--) {
            pattern[n][j] = num;
            num++;if(num==k+1)break;
        }if(num==k+1)break;
        n--;
        for (i = n; i >= m; i--) {
            pattern[i][p] = num;
            num++;if(num==k+1)break;
        }if(num==k+1)break;
        p++;
    }
    for (i = 1; i <= hang; i++) {
        for (j =1; j <= cot; j++) {
            cout << pattern[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
