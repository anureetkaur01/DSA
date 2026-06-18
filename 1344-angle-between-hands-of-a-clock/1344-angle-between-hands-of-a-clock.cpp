class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min;
        double hr;
        double degree;
        min=minutes*6;
        if(hour!=12)
        hr=(hour*30)+(0.5*minutes);
        else hr=0.5*minutes;
        degree=abs(min-hr);
        if(degree>180)
        degree=360-degree;
        return degree;
    }
};