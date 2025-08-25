using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class unary_binary_ternary
    {
        static void Operand(string[] args)
        {
            // Binary:
            int x = 50;
            int y = 50;
            int res = (x + y);
            Console.WriteLine(res);

            // Unary:
            y = ++x; // x = 51 , y = 51
            x = y++; // x = 51, y = 52
            Console.WriteLine(x + " " + y);

            // Ternary:
            // Max AND Min:
            int MAX = (x > y) ? x : y;
            int MIN = (x < y) ? x : y;
            Console.WriteLine("Max Number: " + MAX);
            Console.WriteLine("Min Number: " + MIN);
        }
    }
}
