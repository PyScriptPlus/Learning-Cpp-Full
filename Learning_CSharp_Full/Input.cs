using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Input
    {
        static void InputUser(string[] args)
        {
            // Input gerftan az User:
            Console.Write("Enter your fname: ");
            string fname = Console.ReadLine();

            Console.Write("Enter your age: ");
            int age = int.Parse(Console.ReadLine());

            Console.WriteLine("Your name is: {0}", fname);
            Console.WriteLine("Your age is: {0}", age);

            //--------------------------//
            Console.Write("Enter your lname: ");
            // Null mipazire bedon Warning
            string? lname = Console.ReadLine();
            Console.WriteLine(lname);

            Console.WriteLine(lname ?? "Null");
            Console.WriteLine(fname ?? "Null");
        }
    }
}
