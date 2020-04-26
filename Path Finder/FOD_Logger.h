#ifndef FOD_LOGGER_H
#define FOD_LOGGER_H
#include<bits/stdc++.h>
typedef std::pair<int, int> Point;

enum INFO_STATUS { DEPART, WAYPOINT, RETURN, CLEAN };
enum ALERT_STATUS { CLEAN_FAIL };
class FOD_LOG
{
    public:
        FOD_LOG();
        void InfoLog(INFO_STATUS stat, Point point);
        void AlertLog(ALERT_STATUS stat, Point point);
};

#endif
