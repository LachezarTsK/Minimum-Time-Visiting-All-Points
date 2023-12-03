
public class Solution {

    private static final int SPEED = 1;

    public int minTimeToVisitAllPoints(int[][] points) {
        int minTimeToVisitAllPoints = 0;
        for (int i = 0; i < points.length - 1; ++i) {
            int horizontalDistance = Math.abs(points[i][0] - points[i + 1][0]);
            int verticalDistance = Math.abs(points[i][1] - points[i + 1][1]);
            minTimeToVisitAllPoints += Math.max(horizontalDistance, verticalDistance) * SPEED;
        }
        return minTimeToVisitAllPoints;
    }
}
