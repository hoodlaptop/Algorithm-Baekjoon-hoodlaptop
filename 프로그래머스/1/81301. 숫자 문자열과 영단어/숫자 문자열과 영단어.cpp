#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    string answer_s = "";
    string temp = "";
    
    map<string, string> numberMap = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, 
        {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"}, 
        {"eight", "8"}, {"nine", "9"}
    };

    for (int i = 0; i < s.length(); ++i)
    {
        if (isdigit(s[i]))
        {
            answer_s += s[i];
        }
        else
        {
            temp += s[i];
            if (numberMap.find(temp) != numberMap.end())
            {
                answer_s += numberMap[temp];
                temp = "";
            }
        }
    }

    answer = stoi(answer_s);
    return answer;
}