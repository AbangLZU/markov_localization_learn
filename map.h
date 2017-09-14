//
// Created by abang on 17-9-14.
//

#ifndef MARKOV_LOCALIZATION_LEARN_MAP_H
#define MARKOV_LOCALIZATION_LEARN_MAP_H

class map {

public:
    //definition of single landmark:
    struct single_landmark_s {
        int id_i;
        float x_f;
    };

    //list of landmarks:
    std::vector<single_landmark_s> landmark_list;
};

#endif //MARKOV_LOCALIZATION_LEARN_MAP_H
