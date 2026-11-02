class Solution {
public:
    void merge(vector<int>& a,int start,int mid,int end)
    {
        int left=start;
        int right=mid+1;
        int index=0;
        vector<int>temp(end-start+1); 
        while(left<=mid && right<=end)
        {
            if(a[left]<=a[right])
            {
              temp[index]=a[left];
              index++;
              left++;
            }
            else
            {
                temp[index]=a[right];
                index++;
                right++;
            }
        }
        while(left<=mid)
        {
            temp[index]=a[left];
            index++;
            left++;

        }
        while(right<=end)
        {
            temp[index]=a[right];
            index++;
            right++;
        }
     index=0;
     while(start<=end)
     {
        a[start]=temp[index];
        index++;
        start++;
     }

    }


    void mergesort(vector<int>& a,int start,int end)
    {
        if(start>=end)
        return;
        int mid=start+(end-start)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);

        merge(a,start,mid,end);
    }
    vector<int> sortArray(vector<int>& a) 
    {
        mergesort(a,0,a.size()-1);
        return a;
    }
};