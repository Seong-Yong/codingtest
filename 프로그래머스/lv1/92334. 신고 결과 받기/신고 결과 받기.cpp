#include <string>
#include <vector>
#include <map>
#include<set>
using namespace std;
typedef pair<string,int> P;
vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string,int> list;
    map<string,set<string>> list2;
    vector<int> answer;
    for(string s:report)
    {
        int blank=s.find(" ");
        string a=s.substr(0,blank);
        string b=s.substr(blank);
        if(list2[a].find(b)==list2[a].end())
        {
            list2[a].insert(b);
            list[b]++;
        }
    }
    for(string j:id_list)
    {
        int count=0;
        for(string str:list2[j])
        {
            if(list[str]>=k)
                count++;
        }
        answer.push_back(count);
    }
    return answer;
}