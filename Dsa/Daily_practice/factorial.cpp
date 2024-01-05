#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> primeNum = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    vector<int> factors;
    int n;
    cin >> n;
    int next = n;
    for (int i : primeNum)
    {
        if(next == 1){
            break;
        }
        while(next % i == 0 && next >=1)
        {
            factors.push_back(i);
            next = next / i; 
        }
    }
    for(int i:factors){cout<<i<<" ";}
}
