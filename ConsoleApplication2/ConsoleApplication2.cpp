#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z, q, w;
    cin >> a >> x >> b >> y >> c >> z;
    q = sqrt(pow(abs(a - b), 2) + pow(abs(x - y), 2)) + sqrt(pow(abs(a - c), 2) + pow(abs(x - z), 2)) + sqrt(pow(abs(b - c), 2) + pow(abs(y - z), 2));
    w = sqrt((q / 2) * ((q / 2) - sqrt(pow(abs(a - b), 2) + pow(abs(x - y), 2))) * ((q / 2) - sqrt(pow(abs(a - c), 2) + pow(abs(x - z), 2))) * ((q / 2) - sqrt(pow(abs(b - c), 2) + pow(abs(y - z), 2))));
    cout << "P=" << q << ' ' << "S=" << w << endl;
}
