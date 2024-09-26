#include <iostream>
using namespace std;

class Cricketer {
    // Base class Cricketer
};

class Batsman : public Cricketer {
    int totalRuns, bestPerformance;
    float averageRuns;

public:
     inputData(int runs, int best) {
        totalRuns = runs;
        bestPerformance = best;
        calculateAverage();
    }

     calculateAverage() {
        averageRuns = totalRuns / 10.0;  // assuming 10 matches
    }

     displayData() {
        cout << "Total Runs: " << totalRuns << "\n";
        cout << "Best Performance: " << bestPerformance << "\n";
        cout << "Average Runs: " << averageRuns << "\n";
    }
};

int main() {
    Batsman b;
    b.inputData(500, 120);
    b.displayData();
}

