using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Epsilon
    {
        static void Epsilonn(string[] args)
        {
            Console.WriteLine("Double Epsilon: {0:N324}", double.Epsilon);

            double x = 0.0;
            double y = 3.0;
            Console.WriteLine($"3.0 / 0.0: {y / x}");
            Console.WriteLine($"-3.0 / 0.0: {-y / x}");
            Console.WriteLine($"0.0 / 0.0: {x / x}");
            
        }
    }
}
