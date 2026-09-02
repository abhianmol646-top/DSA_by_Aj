class Solution {
public:
    bool containsDuplicate(vector<int>& a)  
    {
      //sort the array
      
       sort(a.begin(),a.end());

       //check duplicaate

       for(int i=0;i<a.size()-1;i++)
       {
        if(a[i]==a[i+1])
        {
            return true;
        }
       }
    return false;
    }
};