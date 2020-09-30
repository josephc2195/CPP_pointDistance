#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x;
    int y;
};

float calculateDistance(struct Point *p1, struct Point *p2) {
    float cx = (*p1).x - (*p2).x;
    float cy = (*p1).y - (*p2).y;

    return sqrt((cx * cx) + (cy * cy));
}

int main() {
    struct Point *p1, *p2, i, t;
    p1 = &i;
    p2 = &t;

    cout << "Please enter first x coordinate: " << endl;
    cin >> (*p1).x;
    cout << "Enter first y coordinate: " << endl;
    cin >> (*p1).y;

    cout << "Enter second x coordinate: " << endl;
    cin >> (*p2).x;
    cout << "Enter second y coordinate: " << endl;
    cin >> (*p2).y;

    cout << "The distance between these points is: " << calculateDistance(p1, p2) << endl;
}
