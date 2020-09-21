/*Ques 1450 Number of Students Doing Homework at a Given Time.

Code:*/
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int count=0;
        for(int i=0;i<startTime.size();i++)
        {
            if(queryTime>=startTime[i] )
            {
                if(queryTime<=endTime[i])
                count++;
            }
        }
        return count;
    }
};