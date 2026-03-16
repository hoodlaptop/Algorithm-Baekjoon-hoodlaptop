#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strings, int n) 
{
    vector<string> answer = strings;
    
    sort(answer.begin(), answer.end(), 
        [n](const string& a, const string& b) 
        {
            if (a[n] != b[n]) 
            {
                return a[n] < b[n];
            }
            return a < b;
        });
    
    return answer;
}