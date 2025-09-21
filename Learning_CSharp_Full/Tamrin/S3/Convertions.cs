using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class Convertions
    {
        static void Convertion(string[] args)
        {
            int? d = null;
            Console.WriteLine(d.ToString());

            double y = 11.50;
            int q = Convert.ToInt32(y);
            Console.WriteLine(q);

            Console.WriteLine("\n\n===================================\n\n");

            //-------------------------------------//

            double[,] roundingNumbers =
            {
                { 9.49, 9.5, 9.51 },
                { 10.49, 10.5, 10.51 },
                { 11.49, 11.5, 11.51 },
                { 12.49, 12.5, 12.51 },
                { -12.49, -12.5, -12.51 },
                { -11.49, -11.5, -11.51 },
                { -10.49, -10.5, -10.51, },
                { -9.49, -9.5, -9.51 },
            };

            Console.WriteLine("| double | ToInt32 | double | ToInt32 | double | ToInt32 |");

            int i = 0;
            while(i < 8)
            {
                int j = 0;
                while(j < 3) 
                { 
                    Console.Write
                        ($"| {roundingNumbers[i,j],6} | " +
                        $"{Convert.ToInt32(roundingNumbers[i,j]),7}")
                        
                        ;
                    j++;
                }
                Console.WriteLine();
                i++;
            }

            Console.WriteLine("\n\n===================================\n\n");
            //-------------------------------------//

            double dd = 10.5;
            // Math.Round(double value, int digits, MidpointRounding mode);
            Console.WriteLine(Math.Round(dd, 0, MidpointRounding.AwayFromZero));

            //---------------------------------------//
            int number = 12;
            string n = Convert.ToString(number);
            int number2 = 5;
            // number2 += n; // Error

            //-------------------------------------//
            Console.WriteLine("\n\n===================================\n\n");

            char a = 'a';
            int ASCII = (int)a;
            Console.WriteLine(ASCII);

            Console.WriteLine("\n\n===================================\n\n");

            //-------------------------------------//

            double[,] roundingNumbers2 =
            {
                { 9.49, 9.5, 9.51 },
                { 10.49, 10.5, 10.51 },
                { 11.49, 11.5, 11.51 },
                { 12.49, 12.5, 12.51 },
                { -12.49, -12.5, -12.51 },
                { -11.49, -11.5, -11.51 },
                { -10.49, -10.5, -10.51, },
                { -9.49, -9.5, -9.51 },
            };

            Console.WriteLine("| double | ToInt32 | double | ToInt32 | double | ToInt32 |");

            int c = 0;
            while (c < 8)
            {
                int j = 0;
                while (j < 3)
                {
                    Console.Write
                        ($"| {roundingNumbers[c, j],6} | " +
                        $"{Math.Round(roundingNumbers[c, j], 0,
                        MidpointRounding.AwayFromZero),7}");
                    j++;
                }
                Console.WriteLine();
                c++;
            }



        }
    }
}
