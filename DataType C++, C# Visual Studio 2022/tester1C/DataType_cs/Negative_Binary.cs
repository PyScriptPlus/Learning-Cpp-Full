using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataType_cs
{
    internal class Negative_Binary
    {
        static void Main(string[] args)
        {
            // Unsigned int8: byte
            // Signed int8: sbyte
            byte seven = 0b0000_0111;
            seven = (byte)~seven;
            sbyte sevenAdd = (sbyte)(seven + 0b0000_0001);
            Console.WriteLine(sevenAdd); // -7 

        }
    }
}
