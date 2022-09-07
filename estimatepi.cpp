#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void monteCarlo(int N){

    // Stores X and Y coordinates of a random point
    double x, y;

    // Stores distance of a random point from origin
    double d;

    // Stores number of points lying inside circle
    int pCircle = 0;
 
    // Stores number of points lying inside square
    int pSquare = 0;

    // Initializes random points with a seed
    // srand48((int)time(NULL));
    
    rand();

    for(int i = 0; i < N; i++){
        // Finds random X co-ordinate
        x = ((double) rand() / (RAND_MAX));
        y = ((double) rand() / (RAND_MAX));

        // Finds the square of distance of point (x, y) from origin
        d = ((x * x) + (y * y));

        if(d < 1){
            pCircle++;
        } 

        pSquare++;

    }

    // Stores the estimated value of PI
    double pi = 4.0 * ((double)pCircle / (double)(pSquare));

    // Prints the value in pi
    cout << "Final Estimation of Pi = "<< pi;
}

int main(){

    // Input
    int N = 10000000;
   
    // Function call
    monteCarlo(N);

}