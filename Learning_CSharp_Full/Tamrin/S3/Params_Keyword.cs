using Learning_CSharp_Full.Tamrin.S3.Factorial_Recursion;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class Params_Keyword
    {
        static void arrays(params int[] numbers)
        {
            int x = 0;
            while(x < numbers.Length)
            {
                Console.WriteLine(numbers[x]);
                x++;
            }
            return;
        }
        static void prmss()
        {
            // In moshakhas nist chegard tul dare in Parameter
            // params baraye hamin estefade mishe
            arrays(5, 5, 5, 5, 323,11);
        }
    }
}
