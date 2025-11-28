using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Property
{
    internal class Property_Learn
    {
        static void Main()
        {
            Power p = new();
            p.MyProperty = 1; // Setter
            Console.WriteLine(p.MyProperty); // Getter

            try
            {
                p.Age = int.Parse(Console.ReadLine()!);
                Console.WriteLine(p.Age);
            }
            catch(Exception msg)
            {
                Console.WriteLine(msg);
            }


            /*
               Nemituni set koni meghdaresh ghabel taghir nist
               Birun az Class !!!!
               Console.WriteLine(++(p.MyProperty1)); 
            */
            // Faghat getter
            Console.WriteLine(p.MyProperty1);


            Console.WriteLine(p.MyProperty2);
            Console.WriteLine(p.MyProperty3);

            p.MyProperty4 = "MamaD";
            Console.WriteLine(p.Getter);
        }
    }
}
