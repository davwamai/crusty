#ifndef __KNN_H
#define __KNN_H

#include <vector>
#include "/mnt/c/Users/gtx650ti/Desktop/crusty0/crusty/mnist_ml/inc/data.hpp"

class knn
{
    int k;
    std::vector<data *> * neighbors;
    std::vector<data *> * training_data;
    std::vector<data *> * test_data;
    std::vector<data *> * validation_data;
   
    public:
    knn(int);
    knn();
    ~knn();

    void find_knearest(data *query_point);
    void set_training_data(std::vector<data *> *vect);
    void set_test_data(std::vector<data *> *vect);
    void set_validation_data(std::vector<data *> *vect);
    void set_k(int val);

    int predict();
    double claculated_distance(data* query_point, data* input);
    double validate_performance();
    double test_performance();


};

#endif


