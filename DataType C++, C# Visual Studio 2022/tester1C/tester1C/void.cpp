#include <gtest/gtest.h>

// Function declaration
int if_statement();

// Mock function to simulate user input
void mock_input(int value) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.rdbuf()->sputn(reinterpret_cast<const char*>(&value), sizeof(value));
}

// Test case for if_statement
TEST(IfStatementTest, HandlesNonZeroInput) {
    mock_input(5);
    EXPECT_EQ(if_statement(), 5);
}

TEST(IfStatementTest, HandlesZeroInput) {
    mock_input(0);
    EXPECT_EQ(if_statement(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
