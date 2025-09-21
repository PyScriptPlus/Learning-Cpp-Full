using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class Exceptions_Learn
    {
        public static int number = 0;

        static void learn(string[] args)
        {
            try
            {
                checked
                {
                    int x = int.MaxValue;
                    int y = x + 1;
                    y++;
                    y++;
                }
            }
            catch (OverflowException e)
            {
                Console.WriteLine(e.Message);
            }

            //-------------------------------------------//

            object s = "Hello";
            try
            {
                s = null;
                throw new Exception(); // Khata partab mishe
            }
            catch (OverflowException ms1)
            {
                Console.WriteLine("Ejra nemishe!");
            }
            catch (Exception ms2) when (s == null)
            {
                Console.WriteLine("Null hast");
            }

            Console.WriteLine("Continue....");

            //-------------------------------------------//    

            try
            {
                bargasht();
            }
            catch(Exception msg3)
            {
                Console.WriteLine("StackTrace: \n");
                Console.WriteLine(msg3.StackTrace);
            }

            Console.ReadKey();
        }

        static void bargasht()
        {
            int x = 0;
            int y = 0;
            x /= y;
            return;
        }

    }
}
