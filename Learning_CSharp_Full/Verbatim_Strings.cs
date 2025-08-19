using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Verbatim_Strings
    {
        static void Verbatim(string[] args)
        {
            // ANSI Code: Color, font, bold, size va ...
            Console.WriteLine("Hello" + "\u001b[31m");
            Console.WriteLine("World\\tdire");
        }
    }
}
