//
// Created by abang on 17-9-14.
//

#ifndef MARKOV_LOCALIZATION_LEARN_MEASUREMENT_PACKAGE_H
#define MARKOV_LOCALIZATION_LEARN_MEASUREMENT_PACKAGE_H

#include <vector>

class MeasurementPackage {
public:

    struct control_s {
        float delta_x_f;     // move to successor in x position
    };

    struct observation_s {
        std::vector<float> distance_f;  // distance to observed landmark
    };

    control_s control_s_;
    observation_s observation_s_;
};

#endif //MARKOV_LOCALIZATION_LEARN_MEASUREMENT_PACKAGE_H
