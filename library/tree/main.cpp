#include <iostream>

using namespace std;

#define TEST(ModuleName)    extern void test##ModuleName(void); \
                            test##ModuleName()

int main(void) {
    TEST(TreeBasic);
    TEST(FenwickTree);
    TEST(FenwickTree2D);
    TEST(TreeMO);
}