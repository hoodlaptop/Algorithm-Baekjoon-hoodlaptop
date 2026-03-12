#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int wordIdx = 0;

    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == ' ') 
        {
            answer += ' ';
            wordIdx = 0;
            continue;
        }

        if (wordIdx % 2 == 0) 
        {
            answer += toupper(s[i]);
        }
        else 
        {
            answer += tolower(s[i]);
        }
        wordIdx++;
    }
    return answer;
}