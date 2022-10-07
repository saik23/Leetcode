/**
* Idea: SweepLine approach.
* Follow-up: Attempt with Segment Tree.
* Similar Questions: Calendar-I and Calendar-II.
* autho: Sai Kumar Reddy Manne
*/

class MyCalendarThree {
public:
    map<int, int> calendar;
    MyCalendarThree() 
    {
    }
    
    int book(int start, int end) 
    {
        // If not present in the list, map creates an entry with default value (0).
        calendar[start]++;
        calendar[end]--;
        
        int curBookings=0;
        int maxBookings=curBookings;
        for(auto it:calendar)
        {
            curBookings+=it.second;
            maxBookings=max(maxBookings, curBookings);
        }
        
        return maxBookings;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */