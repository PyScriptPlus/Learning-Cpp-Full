using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataType_cs
{
    class Numeral_system_CS
    {
        static void Main(string[] numeral)
        {
            // Decimal : Mabnaye 10
            // Hamin adad hayi ke dar roz mare khodemun estefade mikonim
            // 0 / 1 / 2 / 3 / 4 / 5 / 6 / 7 / 8 / 9
            // Ba 0 mishe 10 ragham

            //Mesal:
            int deci1 = 5;
            int deci2 = 15;
            Console.WriteLine("========== Decimal ==========");
            Console.WriteLine("In Numbers if Decimal: " + deci1);
            Console.WriteLine("In Numbers if Decimal: " + deci2);
            Console.WriteLine("\n");

            //-------------------------------------------------------------//

            // Binary : Mabnaye 2
            // Adad haye 2 raghami ke mishe 0 / 1 estefade kard
            // Nahve tabdilesho goftim toye daftar va github hast ye file drwaio

            // Avvalesh ye ( 0 va b ) mizari baad adad 0 1 to minevisi
            // Mesal:
            int bin1 = 0b10010;
            int bin2 = 0b01101;
            Console.WriteLine("========== Binary ==========");
            Console.WriteLine("Is Number in Binary: " + bin1);
            Console.WriteLine("Is Number in Binary: " + bin2);
            Console.WriteLine("\n");

            //-------------------------------------------------------------//

            // Octal : Mabnaye 8
            // Adad in octal 8 ragham hast 
            // 0 / 1 / 2 / 3 / 4 / 5 / 6 / 7
            // Ba 0 mishe 8 ragham
            // khob ragham badi hash chi?
            // 10 / 11 / 12 / 13 / 14 / 15 / 16 / 17
            // 20 / 21 / 22 / 23 / 24 / 25 / 26 / 27 va .......

            // Adad 10 mishe 8 injuri mirim jelo 11 mishe 9 adad 20 mishe 16
            // Mesal:

            // Neveshtan octal to in fargh mikone deghat kon
            string octal1 = "11";
            int octalnum = Convert.ToInt32(octal1 , 8);
            string octal2 = "20";
            //string octal3 = "18"; // Error 
            int octalnum1 = Convert.ToInt32(octal2, 8);
            //int octalnum2 = Convert.ToInt32(octal3, 8); // Error mide 8 nadarim toye octal
            Console.WriteLine("========== Octal ==========");
            Console.WriteLine("Is Number in Octal: " + octalnum);
            Console.WriteLine("Is Number in Octal: " + octalnum1);
            Console.WriteLine("\n");

            //-------------------------------------------------------------//

            // Hexadecimal : Mabnaye 16
            // Adad haye inam 16 ragham hast be sorat zir: 
            // 0 / 1 / 2 / 3 / 4 / 5 / 6 / 7 / 8 / 9 / A / B / C / D / E / F
            // A == 10
            // B == 11
            // C == 12
            // D == 13
            // E == 14
            // F == 15

            // Baraye neveshtan inam avval (0 bad x) jolosh adad mored nazar
            // Mesal:

            int hexa1 = 0xF;
            int hexa2 = 0x5C;
            int hexa3 = 0xA1;
            // Baraye peyda kardan inam toye daftar hast formulesh
            // Va toye Github folderi ke ba zaban C omadam Numeral_System
            // Neveshtam hast !!!!!!!!!!!!
            Console.WriteLine("========== HexaDecimal ==========");
            Console.WriteLine("Is Number in Hexadecimal: " + hexa1);
            Console.WriteLine("Is Number in Hexadecimal: " + hexa2);
            Console.WriteLine("Is Number in Hexadecimal: " + hexa3);

            //-------------------------------------------------------------//

        }
    }
}
