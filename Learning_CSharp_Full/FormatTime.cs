using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class FormatTime
    {
        static void Timess(string[] args)
        {
            DateTime time = new DateTime(2025,08,16, 11,01,33);
            Console.WriteLine(time.ToString("Year: yyyy/MM/dd | Clock: HH:mm:ss"));
        }
    }
}
