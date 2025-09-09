using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Logical_Operator_Bitwise_Operator
    {
        static void Operator_Logical()
        {

            // AND &&
            // OR || 
            // NOT !
            Console.WriteLine("Logical: ");
            Console.WriteLine("=============================\n");
            Console.WriteLine("AND: " + (true && true));
            Console.WriteLine("AND: " + (false && true));
            Console.WriteLine("AND: " + (true && false));
            Console.WriteLine("AND: " + (false && false));

            Console.WriteLine("OR: " + (true || true));
            Console.WriteLine("OR: " + (false || true));
            Console.WriteLine("OR: " + (true || false));
            Console.WriteLine("OR: " + (false || false));

            Console.WriteLine("NOT: " + !true);
            Console.WriteLine("NOT: " + !false);

            Console.WriteLine("\n=============================\n");


            Console.WriteLine("Bit Manipulation: ");
            Console.WriteLine("=============================\n");
            // Bit Manipulation:

            // Bitwise AND, Bitwise OR, Bitwise NOT
            byte bitwise1 = 0b0000_1010;
            byte bitwise2 = 0b0000_0110;
            Console.WriteLine($"Bitwise AND: {bitwise1 & bitwise2:B8}");
            Console.WriteLine($"Bitwise OR: {bitwise1 | bitwise2:B8}");
            byte bitwiseNOT1 = (byte)~bitwise1;
            byte bitwiseNOT2 = (byte)~bitwise2;
            Console.WriteLine($"Bitwise NOT: {bitwiseNOT1:B8}");
            Console.WriteLine($"Bitwise NOT: {bitwiseNOT2:B8}");

            //XOR , Shift
            byte flags1 = 0b0000_1010;
            byte flags2 = 0b0001_0010;
                         //0001_1000; // 24
            Console.WriteLine($"{flags1 ^ flags2:B8}");
            Console.WriteLine($"{flags1 ^ flags2}");

            byte bit0 = 0b0000_1000;
            byte bit1 = 0b0000_1000;
            byte bit2 = 0b0000_1000;
            Console.WriteLine($"{bit0 ^ bit1 ^ bit2 << 4:B8}");
            Console.WriteLine($"{bit0 ^ bit1 ^ bit2 >> 3:B8}");
            Console.WriteLine($"{bit0 ^ bit1 ^ bit2 ^ 0b0000_1000:B8}");
        }
    }
}
