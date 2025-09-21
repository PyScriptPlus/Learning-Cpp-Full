using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class Base64
    {
        static void B64(string[] args)
        {
            Random rnd = new Random();

            byte[] bytess = new byte[128];

            rnd.NextBytes(bytess);

            Console.WriteLine("Binary Object as bytes: ");
            for (int i = 0; i < bytess.Length; i++)
            {
                Console.Write($"{bytess[i]:X2} ");
            }
            Console.WriteLine();

            Console.WriteLine();

            string encode = Convert.ToBase64String(bytess);
            Console.WriteLine($"Binary Object as Base64: {encode}");
        }
    }
}
