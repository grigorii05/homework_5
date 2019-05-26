#include <Account.h>

#include <gtest/gtest.h>

TEST(AcountTest, GetBalance)
{
  Account testAccount(1, 1000);
  EXPECT_EQ(testAccount.GetBalance(), 1000);
}

TEST(AcountTest, ChangeBalance)
{
  Account testAccount(1, 1000);
  testAccount.Lock();
  testAccount.ChangeBalance(500);
  EXPECT_EQ(testAccount.GetBalance(), 1500);
}
