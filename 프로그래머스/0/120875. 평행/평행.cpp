#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int x1 = dots[0][0], y1 = dots[0][1];
    int x2 = dots[1][0], y2 = dots[1][1];
    int x3 = dots[2][0], y3 = dots[2][1];
    int x4 = dots[3][0], y4 = dots[3][1];
    
    double gradient_12 = abs((double)(y2 - y1) / (x2 - x1));
    double gradient_34 = abs((double)(y4 - y3) / (x4 - x3));
    double gradient_13 = abs((double)(y3 - y1) / (x3 - x1));
    double gradient_24 = abs((double)(y4 - y2) / (x4 - x2));
    double gradient_23 = abs((double)(y3 - y2) / (x3 - x2));
    double gradient_14 = abs((double)(y4 - y1) / (x4 - x1));
    
    if (gradient_12 == gradient_34 || gradient_23 == gradient_14 || gradient_13 == gradient_24) {
        return 1;
    }
    
    return 0;
}