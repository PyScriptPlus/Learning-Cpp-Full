using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataType_cs
{
    class Literal_Suffix_CS
    {
        static void Suffix_Literal(string[] arg)
        {
            // Integer:
            // Mesl C++ mirim jolo dige tozihat nemidam toye on yeki Project hast
            // Just coding....
            // Faghat ye chizi int khali mesl 5 int32 hesab mishe
            Console.WriteLine("Int32: " + 5);
            Console.WriteLine("Int64: " + 5L);
            Console.WriteLine("Unsigned int32: " + 5U);
            Console.WriteLine("Unsigned int64: " + 5UL);

            //--------------------------------------------------------//

            // Floating-Point

            Console.WriteLine("Double: " + 5.6);
            Console.WriteLine("Double tazmini: " + 5.6d); // OR D // Nazari am okeye vali khob
            Console.WriteLine("Float: " + 5.4f); // OR F
            Console.WriteLine("Decimal: " + 5.6m); // OR M

            //--------------------------------------------------------//

            // Character OR Char 
            // Dar C# niyazi be Suffix nadare 
            // Yani Suffix vojud nadare

            //--------------------------------------------------------//

            // String Literal:
            // Toye inja niyazi nist be Suffix
            // Vojud nadard

            //--------------------------------------------------------//

            // Boolean Literal:
            // Vojud nadare Suffix  

            //--------------------------------------------------------//

            // Mesal haye nahayi
            // Va tarkibi:

            var a = 123U;   // uint
            var b = 456L;   // long
            var c = 789UL;  // ulong
            var d = 1.23F;  // float
            var e = 4.56M;  // decimal

            Console.WriteLine("Unsigned int32: " + a);
            Console.WriteLine("int64: " + b);
            Console.WriteLine("Unsigned int64: " + c);
            Console.WriteLine("Float: " + d);
            Console.WriteLine("Decimal: " + e);

        }
    }
}
