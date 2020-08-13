/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        vector<int> childs;
        int pos=0;
        childs.push_back(id);
        while(pos<childs.size())
        {
            for(auto i:employees)
            {
                if(i->id==childs[pos])
                {
                    for(int j:i->subordinates)
                    {
                        childs.push_back(j);
                    }
                    break;
                }
            }
            pos++;
        }
        set<int> ss;
        for(int i:childs)
        {
            ss.insert(i);
        }
        int ans=0;
        for(auto i:employees)
        {
            if(ss.find(i->id)!=ss.end())
            {
                ans+=i->importance;
            }
        }
        return ans;
    }
};