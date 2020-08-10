//1)
#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {



    int testcase, n;

    int dp[11]; //N<11

    cin >> testcase;



    // f(n) = f(n-1) + f(n-2) + f(n-3)

    dp[1] = 1;

    dp[2] = 2;

    dp[3] = 4;

    

    for (int i = 0; i < testcase; i++) {

        int n;
        cin >> n;
        for (int j = 4; j <= n; j++) {

            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        
        }

        cout << dp[n] << endl;

    }

  
    return 0;

}
//------------DP solution--------------//

//2)
//#include <iostream>

int cnt = 0;
int Add(int nStart, int nTarget)
{

    if (nStart > nTarget)return false;
       
    if (nStart == nTarget)
    {
        cnt++;
        return 1;
    }
    
   

    else
    {
        for (int i = 1; i <= 3; i++)
        {
            Add(nStart + i, nTarget);

        }
       
    }
    return cnt;
}


int main()
{
    int n_iter = 0;
    cin >> n_iter;
    int n;

    for (int i = 0; i < n_iter; i++)
    {
        cin >> n; // n°ª ³ÖÀ½
       
        int Result = Add(0, n);
        cout << Result<< endl;
        cnt = 0;
     

    }
    return 0;
}
//-------------Recursive Solution-------------------//