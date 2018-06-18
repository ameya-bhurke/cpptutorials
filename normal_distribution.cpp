#include <stdio.h>

// Program that calculates all the metrics for a normal distribution 

// mean                 - arithmetic mean or average of the sample set
// standard deviation   - square root of the average of squared differences from the mean 

namespace Numeric {

    struct norm_distr_result {
        double mean;    // mean value
        double std_dev; // standard deviation
        double median;  // median value
    };


    norm_distr_result calc_norm_dist(int in[]);
} 