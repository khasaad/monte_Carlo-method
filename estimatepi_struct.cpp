#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

struct Point {
    double x, y;
};


int main(){
    int pCircle = 0;
    int pSquare = 0;
    Point p;

    rand();

    for(int i = 0; i < 100000; i++){
        // Finds random X co-ordinate
        p.x = ((double) rand() / (RAND_MAX));
        p.y = ((double) rand() / (RAND_MAX));

        // Finds the square of distance of point (x, y) from origin
        double d = ((p.x * p.x) + (p.y * p.y));

        if(d < 1){
            pCircle++;
        }

        pSquare++;

    }

    double pi = 4.0 * ((double)pCircle / (double)(pSquare));

    cout << "Final Estimation of Pi = "<< pi;
}