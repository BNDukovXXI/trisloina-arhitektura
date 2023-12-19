// business_logic_layer.cpp
#include "business_logic_layer.h"
#include "data_access_layer.h"

int BusinessLogicLayer::processData(int input) {
    // Извикване на функция от слой за достъп до данни
    int data = DataAccessLayer::getData(input);

    // Някаква бизнес логика
    int result = data * 2;

    return result;
}
