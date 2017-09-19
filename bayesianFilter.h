//
// Created by abang on 17-9-18.
//

#ifndef MARKOV_LOCALIZATION_LEARN_BAYESIANFILTER_H
#define MARKOV_LOCALIZATION_LEARN_BAYESIANFILTER_H


#include <vector>
#include <string>
#include <fstream>

#include "measurement_package.h"
#include "map.h"
#include "help_functions.h"

class bayesianFilter {
public:
    //constructor:
    bayesianFilter();

    //deconstructor:
    virtual ~bayesianFilter();


    //main public member function, which estimate the beliefs:
    void process_measurement(const MeasurementPackage &measurements,
                             const map &map_1d,
                             help_functions &helpers);

    //member public: belief of state x:
    std::vector<float> bel_x;

private:
    bool is_initialized_;
    float control_std;

    std::vector<float> bel_x_init;
    //precision of observations as standard deviation:
    float observation_std ;
};


#endif //MARKOV_LOCALIZATION_LEARN_BAYESIANFILTER_H
