#include "withdraw.c"
#include "deposit.c"
#include "/home/runner/work/M1_ATMsimulation_App/M1_ATMsimulation_App/3_Implementation/unity/unity.h"

void setUp(){}
void tearDown(){}


void test_moneyWithdraw(void)
{
TEST_ASSERT_EQUAL_INT(3000,amountWithdraw(1000, 1000));
TEST_ASSERT_EQUAL_INT(3000,amountWithdraw(1000, 2000));
TEST_ASSERT_EQUAL_INT(2000,amountWithdraw(1000, 3000));

}
void test_moneyDeposit(void)
{

TEST_ASSERT_EQUAL_INT(1000,amountDeposit(1000, 1000));
TEST_ASSERT_EQUAL_INT(2000,amountDeposit(1000, 2000));
TEST_ASSERT_EQUAL_INT(3000,amountDeposit(2000, 2000));


}

int test_main()
{
  UNITY_BEGIN();

  RUN_TEST(test_moneyWithdraw);
  RUN_TEST(test_moneyDeposit);
 
  return UNITY_END();
}
