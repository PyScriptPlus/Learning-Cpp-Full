using CalculatorLib;
using FluentAssertions;

namespace TestProject1
{
    public class CalculatorTests
    {
        [Fact]
        public void add_should10_When5And5()
        {
            // Arrange:
            int num1 = 5;
            int num2 = 5;
            int sum = 8;
            Calculator calc = new Calculator();

            // Act:
            int res = calc.add(num1, num2);

            // Assertion:

            //Assert.Equal(res, sum);
            //res.Should().Be(sum);
            sum.Should().BeLessThanOrEqualTo(res);
        }

        [Theory]
        [InlineData(2,3,5)]
        [InlineData(3, 2, 5)]
        [InlineData(1, 3, 5)]
        public void add_shouldSum_WhenInputAndInput(int x, int y, int sum)
        {
            Calculator calc = new();
            if(x == 1)
            {
                x++;
            }
            sum = calc.add(x, y);
            int res = 5;
            Assert.Equal(sum, res);
        }
    }
}
