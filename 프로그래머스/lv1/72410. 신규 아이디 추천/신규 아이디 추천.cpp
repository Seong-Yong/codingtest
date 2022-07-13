#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string new_id) {
    string answer = "";
    vector<char> change;
    vector<char> change2;
    for (int i = 0; i < new_id.size(); i++)
    {
        change.push_back(tolower(new_id[i]));
    }
    for (int i = 0; i < change.size(); i++)
    {
        if (change[i] == '-' || change[i] == '_' || change[i] == '.' || (change[i] >= 'a' && change[i] <= 'z') || (change[i] >= '0' && change[i] <= '9'))
        {
            change2.push_back(change[i]);
        }
    }
    for (int i = 0; i < change2.size() - 1; i++)
    {
        if (change2[i] == '.' && change2[i + 1] == '.') {
            change2.erase(change2.begin() + i);
            i--;
        }
        
        if (i == change2.size() - 2)
        {
            if (change2[i] == '.' && change2[i + 1] == '.')
                change2.erase(change2.begin() + i);
        }
    }
    if (change2.front() == '.')
        change2.erase(change2.begin());
    if (change2.back() == '.')
        change2.pop_back();
    bool isEmpty = change2.empty();
    if (isEmpty)
        change2.push_back('a');
    if (change2.size() >= 16)
    {
        while (change2.size() > 15)
        {
            change2.pop_back();
        }
        if (change2.back() == '.')
            change2.pop_back();
    }
    if (change2.size() <= 2)
    {
        while (change2.size() <= 2)
            change2.push_back(change2.back());
    }
    for (int i = 0; i < change2.size(); i++)
        answer += change2[i];
    return answer;
}