#define PI 3.14159265358979732384626433832795
class Solution {
public:
    double r,x,y;
    Solution(double radius, double x_center, double y_center) {
        srand(time(NULL));
        r = radius;
        x = x_center;
        y = y_center;
    }
    double uniform() {
        return (double)rand() / RAND_MAX;
    }
    vector<double> randPoint() {
        vector<double> res;
        double R = sqrt(uniform());
        double theta = uniform() * 2 * PI;
        res.push_back(x+(R * r * cos(theta)));
        res.push_back(y+(R * r * sin(theta)));
        return res;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */