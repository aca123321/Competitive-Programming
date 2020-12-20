#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

long maxSum(vector<long> arr, long threshold)
{
    long curr_sum = arr[0], ans = 0, start = 0;
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        if (curr_sum <= threshold)
        {
            ans = max(ans, curr_sum);
        }
        // If curr_sum becomes greater than
        // sum subtract starting elements of array
        while (curr_sum + arr[i] > threshold && start < i)
        {
            curr_sum -= arr[start];
            start++;
        }
        // Add elements to curr_sum
        curr_sum += arr[i];
    }

    if (curr_sum <= threshold)
    {
        ans = max(ans, curr_sum);
    }

    return ans;
}

main()
{

}
