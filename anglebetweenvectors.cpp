#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int v1[3];
    int v2[3];
    cout << "Enter coordinates of the first vector: " << '\n';
    cin >> v1[0];
    cin >> v1[1];
    cin >> v1[2];
    cout << "Enter coordinates of the second vector: " << '\n';
    cin >> v2[0];
    cin >> v2[1];
    cin >> v2[2];
    double dot = v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2];
    double len1 = sqrt(v1[0]*v1[0] + v1[1]*v1[1] + v1[2]*v1[2]);
    double len2 = sqrt(v2[0]*v2[0] + v2[1]*v2[1] + v2[2]*v2[2]);
    cout << dot << '\n';
    double angle = acos(dot/(len1*len2))*(180/M_PI);
    cout << "1 length: " << len1 << '\n';
    cout << "2 length: " << len2 << '\n';
    cout << "Angle between them: " << angle << '\n';
}