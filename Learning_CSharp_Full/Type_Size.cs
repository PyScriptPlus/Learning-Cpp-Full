using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Type_Size
    {
        static void Type(string[] args)
        {
            Console.WriteLine("Int: " + sizeof(int) + "Byte " + 
                $"{int.MinValue} ta {int.MaxValue}");

            Console.WriteLine("Int: " + sizeof(Int64) + "Byte " +
                $"{Int64.MinValue} ta {Int64.MaxValue}");

            Console.WriteLine("Int: " + sizeof(Int32) + "Byte " +
                $"{Int32.MinValue} ta {Int32.MaxValue}");

            Console.WriteLine("Int: " + sizeof(Int16) + "Byte " +
                $"{Int16.MinValue} ta {Int16.MaxValue}");

            Console.WriteLine("Int: " + sizeof(sbyte) + "Byte " +
                $"{sbyte.MinValue} ta {sbyte.MaxValue}");

            Console.WriteLine("\nUnsigned: ");

            Console.WriteLine("Int: " + sizeof(UInt64) + "Byte " +
                $"{UInt64.MinValue} ta {UInt64.MaxValue}");

            Console.WriteLine("Int: " + sizeof(UInt32) + "Byte " +
                $"{UInt32.MinValue} ta {UInt32.MaxValue}");

            Console.WriteLine("Int: " + sizeof(UInt16) + "Byte " +
                $"{UInt16.MinValue} ta {UInt16.MaxValue}");

            Console.WriteLine("Int: " + sizeof(byte) + "Byte " +
                $"{byte.MinValue} ta {byte.MaxValue}");


            // Unsigned: :D
            uint x = 2;
            uint y = 3;
            Console.WriteLine(x - y + " " + uint.MaxValue);

        }
    }
}
