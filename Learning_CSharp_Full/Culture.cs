using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;

namespace Learning_CSharp_Full
{
    internal class Culture
    {
        static void Culturess()
        {

            CultureInfo.CurrentCulture = CultureInfo.GetCultureInfo("fa-IR");

            Console.OutputEncoding = Encoding.UTF8;

            decimal price = 10_000M;
            Console.WriteLine($"Is: {price:C}");
            Console.WriteLine(
                format: "{0} Your price: {0:C}",
                arg: price
                );
        }
    }
}
