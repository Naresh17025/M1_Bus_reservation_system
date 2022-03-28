#include "unity.h"
#include "bus_operations.h"
#define PROJECT_NAME "BUS_RESERVATION_SYSTEM"
void test_bus();
void test_book();
void test_name_n0();
int test_read_n0();
void test_read_name();
void test_status();
void test_status_1();
void test_cancel();
void test_login();
void setUp()
{

}
void tearDown()
{

}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_bus);
    RUN_TEST(test_book);
    RUN_TEST(test_name_n0);
    RUN_TEST(test_read_n0);
    RUN_TEST(test_read_name);
    RUN_TEST(test_status);
    RUN_TEST(test_status_1);
    RUN_TEST(test_cancel);
    RUN_TEST(test_login);
    return UNITY_END;
}


