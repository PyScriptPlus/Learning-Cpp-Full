using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class Tamrin
    {
        static void Main(string[] args)
        {
            Console.Write("Enter amout: ");
            string amount = Console.ReadLine()!;

            if (string.IsNullOrEmpty(amount))
            {
                return;
            }

            try
            {
                decimal money = Convert.ToDecimal(amount);
                Console.WriteLine($"Amount formatted as currency: {money:C}");
            }
            catch (FormatException ms) when (amount.Contains('$'))
            {
                Console.WriteLine("In dare char $ ro!!");
            }
            catch (FormatException msg)
            {
                Console.WriteLine("Faghat argham");
            }

            //int max = 500;
            //for (byte i = 0; i < max; i++)
            //{
            //    WriteLine(i);
            //}

        }
    }
}
