using System;
using System.Xml;

namespace tamrinS2{

//#error version
// Compiler version: '5.0.0-2.25404.10 (418b52db)'. Language version: 13.0.

    class Program
    {
        #region Function Print
        /// <summary>
        /// یک پیام چاپ میکند این تابع از طریق آرگومانی که
        /// بهش داده میشه
        /// </summary>
        /// <param name="msg">یک پارامتر پیام دارد</param>
        static void print(string msg)
        {
            Console.WriteLine(msg);
        }
        #endregion
        static void Main(string[] args)
        {

            print("Hello");
            Console.WriteLine("\n==============================\n");
            //--------------------------------------//
            #region Floating-Point
            float x = 5.2f;
            double y = 5.2;
            decimal z = 5.2m;
            Console.WriteLine($"Deghat float: {x:N17}");
            Console.WriteLine($"Deghat double: {y:N17}");
            Console.WriteLine($"Deghat decimal: {z:N17}");
            #endregion
            //--------------------------------------//
            int @double = 18;
            double @int;

            //--------------------------------------//
            Console.WriteLine("\n==============================\n");
            Console.WriteLine("My Drivers: ");
            /// Code khubie in :D
            string[] drive = ENV.GetLogicalDrives();
            foreach (string m in drive) { 
            Console.WriteLine(m);
            }
            //--------------------------------------//
            #region Jaygozari
            WriteLine("\n==============================\n");
            string fname, lname;
            fname = "Mohammad";
            WriteLine($"Your name is: {fname}");
            lname = "Yousefi";
            WriteLine("Your fname and lname: {0} {1}", fname, lname);
            #endregion
            //--------------------------------------//

            WriteLine("\n==============================\n");
            string json = $$"""
                {
                    "name": "{{fname}}",
                    "fname": "{{lname}}",
                    "age": {{@double}},
                    "city": "Tehran",
                    "mohasebe": {{12 * 2}}
                }
                """;
            Console.WriteLine(json);
            //--------------------------------------//
            WriteLine("\n==============================\n");
            int bin = 0b0000_1010;
            Console.WriteLine("Decimal: " + bin + "\nBinary: {0:B8}",bin);
            int hex = 0xAF1;
            Console.WriteLine("Decimal: " + hex + "\nHexadecimal: {0:X}",hex);
            string octal1 = "20";
            string octal2 = "10";
            string octal3 = "17";
            int oct1 = Convert.ToInt32(octal1, 8);
            int oct2 = Convert.ToInt32(octal2, 8);
            int oct3 = Convert.ToInt32(octal3, 8);
            Console.WriteLine("Octal: " + oct1);
            Console.WriteLine("Octal: " + oct2);
            Console.WriteLine("Octal: " + oct3);
            //--------------------------------------//
            WriteLine("\n==============================\n");
            /*
            Unsafe code Example: 
            Console.WriteLine("Half: " + sizeof(Half));
            Console.WriteLine("128Bit: " + sizeof(Int128));
            Console.WriteLine(
                $"Half: {Half.MinValue} ta {Half.MaxValue}"
                +
                $"\n128Bit: {Int128.MinValue} ta {Int128.MaxValue}"

                );
            */
            unsafe
            {
                Console.WriteLine("Half: " + sizeof(Half));
                Console.WriteLine("128Bit: " + sizeof(Int128));
                Console.WriteLine(
                    $"Half: {Half.MinValue} ta {Half.MaxValue}"
                    +
                    $"\n128Bit: {Int128.MinValue} ta {Int128.MaxValue}"

                    );
            }

            //--------------------------------------//
            WriteLine("\n==============================\n");
            Console.WriteLine("Target Type");
            // Target Type
            var n = new XmlDocument();
            XmlDocument xml = new();
            //var kl = new(); Error

            //--------------------------------------//
            WriteLine("\n==============================\n");
            int zy = 3;
            int num1, num2, num3, num4;
            List<int> values = new();
            values.Add(zy);
            num1 = 12;
            values.Add(num1);
            num2 = 56;
            values.Add(num2);
            num3 = 43;
            values.Add(num3);
            num4 = 11;
            values.Add(num4);
            values.Remove(zy); 
            foreach(int lists in values)
            {
                Console.WriteLine(lists);
            }

            //--------------------------------------//
            WriteLine("\n==============================\n");
            #region input
            //Write("Enter your age: ");
            //int age = int.Parse(Console.ReadLine());
            //Write("Enter your name: ");
            //string? name = Console.ReadLine();
            //Write("Enter your lname: ");
            //string lastName = Console.ReadLine()!;
            //lastName = null;
            //Console.WriteLine(age + "\n" + name + "\n" +
            //    lastName);
            #endregion

            //--------------------------------------//
            WriteLine("\n==============================\n");
            #region argument
            //Console.WriteLine(args[0]);
            //Console.WriteLine(args[1]);
            //Console.WriteLine(args[2]);
            #endregion

            //--------------------------------------//
            WriteLine("\n==============================\n");

            int? auto = default;
            Console.WriteLine(auto);
            Console.WriteLine(default(int));
            Console.WriteLine(default(string));
            Console.WriteLine(default(DateTime));
            string nl = null;
            Console.WriteLine(nl);
            auto = null;
            Console.WriteLine(auto);

            if (auto != null) Console.WriteLine("Yes");
            else Console.WriteLine("No");

            nl = "Ali";
            Console.WriteLine(nl ?? "<Null>");
            nl = null;
            Console.WriteLine(nl ?? "<Null>");
            Console.WriteLine(auto ?? 0);
            auto = 50;
            Console.WriteLine(auto ?? 0);



        }
    }
    
}