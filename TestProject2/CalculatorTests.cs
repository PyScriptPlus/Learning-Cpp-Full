using CalculatorLib2;
using Shouldly;

namespace TestProject2
{
    public class CalculatorTests
    {
        [Fact]
        public void division_should3_When15DivideBye5()
        {
            // Arrange:
            int x = 5;
            int y = 15;
            int divide = 3;
            Calculator calc = new();

            // Act:
            int result = calc.division(y, x);


            // Assertion:
            divide.ShouldBe(result);
        }


        [Theory]
        [InlineData(6,3,2)]
        [InlineData(25,5,5)]
        [InlineData(4,2,2)]
        [InlineData(8,2,4)]
        public void division_shouldDivide_WhenInputDivideByeInput(int x, int y, int sum)
        {
            // Arrange:
            int j = 4;
            int i = 2;
            Calculator calc = new Calculator();

            // Act:
            int result = calc.division(x, y);

            // Assertion:
            sum.ShouldBe(result);
            j.ShouldBeGreaterThan(i);

        }


    }
}
