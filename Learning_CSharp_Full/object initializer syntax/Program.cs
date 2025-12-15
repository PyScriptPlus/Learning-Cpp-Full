using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.object_initializer_syntax
{
    public class Program
    {
        static void OBJ()
        {
            Person person = new()
            {
                fName = "Mamad",
                age = 18,
                born = new(2008,3,24)
            };
            Console.WriteLine("Your name is: " + person.fName);
            Console.WriteLine("Your age is: {0} and born: {1}"
            , person.age,person.born);

        }
    }
}
