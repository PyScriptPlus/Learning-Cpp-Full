using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Half_Object_unsafe
    {
        static void Halfss()
        {
            Half x = (Half)21.36;
            Console.WriteLine(x.GetType());
            Console.WriteLine(x);
            // Baraye estefade az unsafe bayad tickesh ro bezani
            // Vagarne error mide pishfarz
            unsafe
            {
                Console.WriteLine(sizeof(Half));
                Console.WriteLine("Value Half: {0} ta {1}", Half.MinValue
                    , Half.MaxValue);
            }
            object num1 = 25;
            Console.WriteLine(num1.GetType());
            object num2 = 2.3;
            object num3 = 2.3f;
            object num4 = 2.3m;
            Console.WriteLine($"Num2: {num2.GetType()} \n" +
                $"Num3: {num3.GetType()} \n" +
                $"Num4: {num4.GetType()}");
        }
    }
}
