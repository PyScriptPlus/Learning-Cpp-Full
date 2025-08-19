using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Key
    {
        static void Keys()
        {
            Console.Write("Enter key: ");
            ConsoleKeyInfo keyInfo = Console.ReadKey();
            Console.WriteLine();
            Console.WriteLine("Key: {0}\n Modifire: {1}\n KeyChar: {2}\n",
                arg0: keyInfo.Key,
                arg1: keyInfo.Modifiers,
                arg2: keyInfo.KeyChar

                );
        }
    }
}
