#include <iostream>
#include <cmath>

using namespace std;


int main() {
   // Get from user Ints for x1, y1 (point A)
    cout << "Enter x1 (A): ";
    double x1;
    cin >> x1;

    cout << "Enter y1 (A): ";
    double y1;
    cin >> y1;

    // Get radius
    cout << "Enter radius: ";
    double radius;
    cin >> radius;

    // Get from user Ints for x2, y2 (point B)
    cout << "Enter x2 (B): ";
    double x2;
    cin >> x2;

    cout << "Enter y2 (B): ";
    double y2;
    cin >> y2;

    // Calculate x3, y3 (point D)
    double x3 = x1 + (x2 - x1) * radius / sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double y3 = y1 + (y2 - y1) * radius / sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print x3, y3
    cout << "x3: " << x3 << endl;
    cout << "y3: " << y3 << endl;

    // calculate arrow length as 1/10 of radius
    double arrowLength = radius / 10;

    // get angle of arrow from user (in degrees)
    double angle;
    do {
        cout << "Enter angle of arrow (in degrees, from 10 to 45): "; 
        cin >> angle;
    } while (angle < 10 || angle > 45);

    // convert angle to radians
    double angleRadians = angle * M_PI / 180;

    // calculate formula for a straight line from x1,y1 to x2,y2
    // y = mx + b
    // m = (y2 - y1) / (x2 - x1)
    double m = (y2 - y1) / (x2 - x1);

    // calculate deegrees of angle of line from x1,y1 to x2,y2
    // angle = atan(m) * 180 / M_PI
    double angleLine = atan(m) * 180 / M_PI;

    // calculate x4, y4 which is the end of the arrow at the angle from x3,y3 placed on the line of m and b
    // using the formula for a straight line and angleLine
    double x4 = x3 - arrowLength * cos(angleLine + angleRadians);
    double y4 = y3 - arrowLength * sin(angleLine + angleRadians);


    // calculate x5, y5 which is the end of the arrow at the angle from x3,y3 placed on the line of m and b
    // using the formula for a straight line and angleLine
    double x5 = x3 - arrowLength * cos(angleRadians - angleLine);
    double y5 = y3 - arrowLength * sin(angleRadians - angleLine);

    // print all 3 points
    cout << "x3: " << x3 << endl;
    cout << "y3: " << y3 << endl;
    cout << "x4: " << x4 << endl;
    cout << "y4: " << y4 << endl;
    cout << "x5: " << x5 << endl;
    cout << "y5: " << y5 << endl;

    return 0;
}