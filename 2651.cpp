class Solution {     //12 24 ans=12
public:
    int findDelayedArrivalTime(int arrivaltime, int delayedtime)
    {
       if(arrivaltime+delayedtime==24)
       {
        return 0;
       }
       else if(arrivaltime+delayedtime<24)
       {
        return arrivaltime+delayedtime;
       }
       else
       {
       return -(24-(arrivaltime+delayedtime));
       }
    }
};