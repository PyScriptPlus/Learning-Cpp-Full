using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Default_Keyword
    {
        static void DefaultKey(string[] args)
        {
            Console.WriteLine($"Default to Int: {default(int)}");
            Console.WriteLine($"Default to Double: {default(double)}");
            Console.WriteLine($"Default to String: {default(string)}");
            Console.WriteLine($"Default to DateTime: {default(DateTime)}");
            Console.WriteLine($"Default to Boolean: {default(bool)}");

            //Console.WriteLine((default(string) == null) ? "Is Null" : "Do not Null");
            Console.WriteLine(default(string) ?? "Null");
            string d = "Hello";
            // Null-coalescing
            Console.WriteLine(d ?? "Null");

            //------------------------//

            int? hichi = null;
            Console.WriteLine(hichi ?? 0); // Chon int hast !!!
        }
    }
}
