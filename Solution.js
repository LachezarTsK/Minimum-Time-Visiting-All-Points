
/**
 * @param {number[][]} points
 * @return {number}
 */
var minTimeToVisitAllPoints = function (points) {
    const SPEED = 1;
    let minTimeToVisitAllPoints = 0;

    for (let i = 0; i < points.length - 1; ++i) {
        let horizontalDistance = Math.abs(points[i][0] - points[i + 1][0]);
        let verticalDistance = Math.abs(points[i][1] - points[i + 1][1]);
        minTimeToVisitAllPoints += Math.max(horizontalDistance, verticalDistance) * SPEED;
    }
    return minTimeToVisitAllPoints;
};
