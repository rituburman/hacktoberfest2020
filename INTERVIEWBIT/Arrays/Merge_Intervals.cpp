vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
  
    vector<Interval> result;
    bool finalAnswer=0;
    bool flag=0;
    Interval ans(0,0);
    for(long long i=0;i<intervals.size();i++)
    {
        Interval I=intervals[i];
        
        if(finalAnswer==1)
        {
            result.push_back(I);
        }
        else
        {
        if(flag==0)
        {
            if(newInterval.start<=I.start)
            {
                ans.start=newInterval.start;
                if(newInterval.end<I.start)
                {
                    result.push_back(newInterval);
                    result.push_back(I);
                    finalAnswer=1;
                }
                else if(newInterval.end>=I.start && newInterval.end<I.end)
                {
                    ans.end=I.end;
                    result.push_back(ans);
                    finalAnswer=1;
                }
                flag=1;
            }
            else if(newInterval.start>I.start && newInterval.start<=I.end)
            {
                ans.start=I.start;
                flag=1;
            }
            else
            {
                result.push_back(I);
            }
        }
        else
        {
            if(newInterval.end < I.start)
            {
                ans.end=newInterval.end;
                result.push_back(ans);
                result.push_back(I);
                finalAnswer=1;
            }
            else if(newInterval.end >= I.start && newInterval.end<I.end)
            {
                ans.end=I.end;
                result.push_back(ans);
                finalAnswer=1;
            }
            else
            {
                
            }
        }
        }
    }
    
    if(finalAnswer!=1)
    {
        if(flag==1)
        {
            ans.end=newInterval.end;
            result.push_back(ans);
        }
        else
        {
            result.push_back(newInterval);
        }
    }
    
    return result;
}
