#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for(int i=0; i<arr.size(); i++)
    {
        if(i==0)
        {
            answer.push_back(arr.at(i));
        }
        else if(answer.back() != arr.at(i))
        {
            answer.push_back(arr.at(i));
        }
    }

    return answer;
}