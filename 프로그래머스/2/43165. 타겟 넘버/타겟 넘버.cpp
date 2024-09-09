#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int cnt = 0;

void dfs(vector<int> numbers, int sum, int target, int idx)
{
    if (numbers.size()-idx ==0)
    {
        if (sum == target)
        {
            cnt++;
        }

        return;

    }

    dfs(numbers, sum + numbers[idx], target, idx + 1);
    dfs(numbers, sum - numbers[idx], target,idx + 1);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;

    dfs(numbers, +numbers[0], target,1);
    dfs(numbers, -numbers[0], target,1);

    answer = cnt;

    return answer;
}