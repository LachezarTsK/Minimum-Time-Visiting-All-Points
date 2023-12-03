
using System;

public class Solution
{
    static readonly int SPEED = 1;

    public int MinTimeToVisitAllPoints(int[][] points)
    {
        int minTimeToVisitAllPoints = 0;
        for (int i = 0; i < points.Length - 1; ++i)
        {
            int horizontalDistance = Math.Abs(points[i][0] - points[i + 1][0]);
            int verticalDistance = Math.Abs(points[i][1] - points[i + 1][1]);
            minTimeToVisitAllPoints += Math.Max(horizontalDistance, verticalDistance) * SPEED;
        }
        return minTimeToVisitAllPoints;
    }
}
