using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3.Factorial_Recursion
{
    internal class Recursion_Function
    {
        static void Main(string[] args)
        {
            WriteLine(factorial(5));
        }

        static int factorial(int x)
        {
            if(x == 0)
            {
                return 1;
            }
            return factorial(x - 1) * x;
        }

    }
}
