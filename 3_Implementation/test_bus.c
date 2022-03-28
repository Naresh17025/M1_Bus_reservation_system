#include "unity.h"
#define PROJECT_NAME "bus_reservation_system"
extern void test_bus();
void setUp(void)
{
}
void tearDown(void)
{
}
int main(void){
    UnityBegin(NULL);
    RUN_TEST(test_bus);
    return (UnityEnd());
}

