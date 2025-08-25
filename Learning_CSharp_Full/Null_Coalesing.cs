using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Null_Coalesing
    {
        static void NULL()
        {
            string? authorName = null;
            //authorName = "Ali";
            int? len = authorName?.Length;
            Console.WriteLine(len);
            Console.WriteLine(authorName ?? "{NULL}");
            authorName ??= "Unknow!!";
            len = authorName?.Length?? default(int);
            Console.WriteLine(authorName + " " + len);

        }
    }
}
