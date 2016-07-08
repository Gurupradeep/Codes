/* Enter your code here. Read input from STDIN. Print output to STDOUT */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct point
{
    long long x,y;
};

int main()
{
    int num;
    int i;

    vector<point> points;

    cin>>num;
    point hold;

    for(i=0; i<num; ++i)
    {
        cin>>hold.x>>hold.y;

        points.push_back(hold);
    }

    double ave_x, ave_y;

    for(i=0; i<(int)points.size(); ++i)
    {
        ave_x += points[i].x;
        ave_y += points[i].y;
    }

    ave_x /= points.size();
    ave_y /= points.size();

    double diff_x, diff_y;

    diff_x = points[0].x - ave_x;
    diff_y = points[0].y - ave_y;

    int best = 0;
    long double best_dist=floor(sqrt((pow((diff_x),2)+pow((diff_y),2))));

    double hold_dist;

    for(i=1; i<(int)points.size(); ++i)
    {
        diff_x = points[i].x - ave_x;
        diff_y = points[i].y - ave_y;

        hold_dist=floor(sqrt((pow((diff_x),2)+pow((diff_y),2))));

        if(hold_dist < best_dist)
        {
            best_dist = hold_dist;
            best = i;
        }
    }

    point best_pt = points[best];

    long long total_dist = 0;

    for(i=0; i<(int)points.size(); ++i)
    {
        diff_x = fabs(points[i].x-best_pt.x);
        diff_y = fabs(points[i].y-best_pt.y);

         total_dist+=max(diff_x,diff_y);
    }

    cout<<total_dist<<endl;
}
