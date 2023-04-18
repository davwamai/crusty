#include "/mnt/c/Users/gtx650ti/Desktop/crusty0/crusty/mnist_ml/inc/common.hpp"

void common_data::set_training_data(std::vector<data *> *vect)
{
    training_data = vect;
}
void common_data::set_test_data(std::vector<data *> *vect)
{
    test_data = vect;
}
void common_data::set_validation_data(std::vector<data *> *vect)
{
    validation_data = vect;
}