class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int s = points.size();
        if (s < 3) {
            return s;
        }
        int count = 2;
        for (int j = 0; j < s; ++j) {
            for (int i = j + 1; i < points.size(); ++i) {
                double k = 1.0;
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];
                
                int dy = y1 - y2;
                int dx = x1 - x2;

                int cur = 2;
                if (dx && dy) {
                    k = static_cast<double>(dy) / dx;
                    double b = points[i][1] - k * points[i][0];
                    for (int l = i + 1; l < s; ++l) {
                        if (fabs(points[l][1] - (k * points[l][0] + b)) < 1e-9) {
                            ++cur;
                        }
                    }
                } else if (dy) {
                    int x = x1;
                    for (int l = i + 1; l < s; ++l) {
                        if (points[l][0] == x) {
                            ++cur;
                        }
                    }
                } else {
                    int y = y1;
                    for (int l = i + 1; l < s; ++l) {
                        if (points[l][1] == y) {
                            ++cur;
                        }
                    }
                }

                if (cur > count) {
                    count = cur;
                }
            }
        }
        return count;
    }
};
