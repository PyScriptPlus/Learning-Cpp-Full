using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Assignment_Operators
    {
        static void Assignment(string[] args)
        {
            int x = 50;
            //x = x + 50;
            x += 50;
            Console.WriteLine(x);
            x /= 50;
            Console.WriteLine(x);
            x -= 3;
            Console.WriteLine(x);
            x += 2;
            Console.WriteLine(x);
            x *= 100;
            Console.WriteLine(x);
            x %= 2;
            Console.WriteLine(x);

        }
    }
}
