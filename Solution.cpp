
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
    static const int SPEED = 1;

public:
    int minTimeToVisitAllPoints(const vector<vector<int>>& points) const {
        int minTimeToVisitAllPoints = 0;
        for (int i = 0; i < points.size() - 1; ++i) {
            int horizontalDistance = abs(points[i][0] - points[i + 1][0]);
            int verticalDistance = abs(points[i][1] - points[i + 1][1]);
            minTimeToVisitAllPoints += max(horizontalDistance, verticalDistance) * SPEED;
        }
        return minTimeToVisitAllPoints;
    }
};
