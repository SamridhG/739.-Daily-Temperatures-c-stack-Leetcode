class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
    vector<int>A(t.size(),0);
        stack<int>s;
        s.push(t.size()-1);
        for(int i=t.size()-2;i>=0;i--)
        {
            if(t[i]>=t[s.top()])
            {
                while(!s.empty() && t[i]>=t[s.top()])
                {
                    
                    s.pop();
                }
            }
    
            if(s.size())
            {
                A[i]=s.top()-i;
            }
            
            s.push(i);
         
        }
        return A;
    }

};
