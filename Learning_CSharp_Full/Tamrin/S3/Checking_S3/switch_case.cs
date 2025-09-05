using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Checking_S3
{
    internal class switch_case
    {
        static void cases(string[] args)
        {
        // Random.Shared.Next(1,8);
        llwd:
            Random rnd = new Random();

            Console.WriteLine(rnd.Next(1, 8));
            goto llwd;
            Console.WriteLine(rnd);
            int random = Random.Shared.Next(1, 8);
            switch (random)
            {
                case 1:
                    Console.WriteLine("One");
                    break;
                case 2:
                    Console.WriteLine("Two");
                    break;
                case 3:
                    Console.WriteLine("Three");
                    break;
                case 4:
                    Console.WriteLine("four");
                    break;
                case 5:
                case 6:
                    Console.WriteLine("five and six");
                    break;
                default:
                    Console.WriteLine("onther");
                    break;
            }
            Console.WriteLine("Switch case is finished");

        }
    }
}
