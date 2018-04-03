#include <iostream>
#include <map>
int dim = 20;
std::map<std::pair<int, int>, long long> memo;

long long solve(int x, int y)
{
    if (memo.count(std::make_pair(dim-x,dim-y))) return memo[std::make_pair(dim-x,dim-y)];
    if (x == dim && y == dim)
    {
        return 1;
    }
    long long a1=0,a2=0;
    if (x < dim) {
        a1 = solve(x+1,y);
    }
    if (y < dim) {
        a2 = solve(x,y+1);
    }
    memo[std::make_pair(dim-x, dim-y)] = a1+a2;
    return a1+a2;
}

int main()
{
    long long ans = solve(0, 0);
    std::cout << ans << std::endl;

    return 0;
}
