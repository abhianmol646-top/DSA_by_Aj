class Solution {
public:
    string sortVowels(string s) 
    {
     string ans="";
     string result="";

     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            ans.push_back(s[i]);
            s[i]='*';
        }
     }   
     for(int i=0;i<s.size();i++)
     {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      {
        ans.push_back(s[i]);
        s[i]='*';
      } 
     }
     sort(ans.begin(),ans.end());
     int index=0;
     for(int i=0;i<s.size();i++)
     {
       if(s[i]=='*')
       {
        result.push_back(ans[index]);
        index++;
       }
       else
       {
        result.push_back(s[i]);
       }
     }
     return result;
    }
};