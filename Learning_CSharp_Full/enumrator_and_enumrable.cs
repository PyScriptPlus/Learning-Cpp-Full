using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace Learning_CSharp_Full
{
    internal class enumrator_and_enumrable
    {
        static void Main()
        {
            string[] names = { "Ali", "Hassan", "Danial" };
            IEnumerator enumerator = names.GetEnumerator();

            enumerator.Reset();
            enumerator.MoveNext();
            while (enumerator.MoveNext())
            {
                string name = (string)enumerator.Current;
                Console.WriteLine(name);
                //enumerator.Reset();
            }
            

        }
    }
}
