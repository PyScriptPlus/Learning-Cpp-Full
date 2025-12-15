using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.Algorithm
{
    internal class Algorithm
    {
        static void algor(string[] args)
        {
#if false
            /*
              mr-st.blog.ir/1394/03/11/%DA%86%D9%86%D8%AF
              -%D8%A7%D9%84%DA%AF%D9%88%D8%B1%DB%8C%D8%
              AA%D9%85-%D8%AD%D9%84%D9%82%D9%87-%D9%
              87%D8%A7%DB%8C-%D8%AA%DA%A9%D8%B1%D8%A7%D8%B1-1
            */
            //--------------------------------------------------//

            // Algorithm 1:
            //int i = 1;
            //while (i <= 10)
            //{
            //    Console.WriteLine(i);
            //    i++;
            //}

            ////--------------------------------------------------//

            //// Algorithm 2:
            //int j = 10;
            //while (j < 100)
            //{
            //    Console.WriteLine(j);
            //    j += 2;
            //}

            ////--------------------------------------------------//

            //// Algorithm 3:
            //int x = 999;
            //while (x >= 100)
            //{
            //    Console.WriteLine(x);
            //    x -= 2;
            //}

            ////--------------------------------------------------//

            //// Algorithm 4:
            //int y = 1;
            //do
            //{
            //    Console.Write("Enter Riyazi score: ");
            //    double a = int.Parse(Console.ReadLine());
            //    Console.Write("Enter Fizik 2 score: ");
            //    double b = int.Parse(Console.ReadLine());
            //    Console.Write("Enter BarnameSazi 3 score: ");
            //    double c = int.Parse(Console.ReadLine());
            //    double s = a + b + c;
            //    double avrage = s / 3;
            //    Console.WriteLine(avrage);
            //    y++;
            //} while (y <= 30);

            ////--------------------------------------------------//

            //// Algorithm 5:
            //int m = 1;
            //int max = int.Parse(Console.ReadLine());
            //while (m <= 30)
            //{
            //    int q = int.Parse(Console.ReadLine());
            //    max = (q > max) ? q : max;
            //    m++;
            //}
            //Console.WriteLine($"Your Max number: {max}");

            //--------------------------------------------------//

            // Algorithm 6:

            int n = int.Parse(Console.ReadLine());
            int max = n;
            int min = n;
            int i = 2;
            int sum = n;
            while (i <= 4)
            {
                n = int.Parse(Console.ReadLine());
                max = (n > max) ? n : max;
                min = (n < min) ? n : min;
                sum += n;
                i++;
            }
            Console.WriteLine("Sum: " + sum);
            Console.WriteLine("Max: " + max);
            Console.WriteLine("Min: " + min);

            //--------------------------------------------------//

            // Algorithm 7:

            int num = int.Parse(Console.ReadLine());
            int i = 1;
            while (i <= num)
            {
                Console.WriteLine(i);
                i++;
            }

            //--------------------------------------------------//

            // Algorithm 8:

            int num1 = int.Parse(Console.ReadLine());
            int i = 0;
            while (i <= num1)
            {
                Console.WriteLine(i);
                i += 2;
            }

            //--------------------------------------------------//

            // Algorithm 9:
            int n = int.Parse(Console.ReadLine());
            int m = int.Parse(Console.ReadLine());
            if (m <= n)
            {
                while (m <= n)
                {
                    Console.WriteLine(m);
                    m++;
                }
            }
            else
            {
                Console.WriteLine("Adad dovvom ro kochak tar az avvali bezanid!");
            }

            //--------------------------------------------------//

            // Algorithm 10:

            int m = int.Parse(Console.ReadLine());
            int n = int.Parse(Console.ReadLine());
            if (m > n)
            {
                int t;
                t = m;
                m = n;
                n = t;
                while (m <= n)
                {
                    Console.WriteLine(m);
                    m++;
                }
            }
            else
            {
                Console.WriteLine("Adad dovvom ro kochak tar az avvali bezanid!");
            }

            //--------------------------------------------------//

            // Algorithm 11:

            int nums2 = int.Parse(Console.ReadLine());
            int sum2 = 0;
            int i = 1;
            while (i < nums2)
            // i <= nums2 khod on adad ham ke vared kardim
            // Hesab mikone
            // Vali gofte kochaktar az on so'al ono gofte khod algorithm
            // Neveshte i <= nums2
            {
                sum2 += i;
                Console.WriteLine(i);
                i++;
            }
            Console.WriteLine(sum2);

            //--------------------------------------------------//

            // Algorithm 12:

            double num3 = double.Parse(Console.ReadLine());
            double sum3 = 0.0;
            double i = 1.0;
            while (num3 >= i)
            {
                sum3 += (1.0 / i);
                i++;

            }
            Console.WriteLine(sum3);

            //--------------------------------------------------//

            // Algorithm 13:

            int num4 = int.Parse(Console.ReadLine());
            int i = 1;
            int sum4 = 1;
            while (i <= n)
            {
                sum *= i;
                i++;
            }
            Console.WriteLine(sum);

            //--------------------------------------------------//

            // Algorithm 14:

            int num5 = int.Parse(Console.ReadLine());
            int i = 1;
            while (i <= num5)
            {
                int r = num5 % i;
                if (r == 0)
                {
                    Console.WriteLine(i);
                }
                i++;
            }

            //--------------------------------------------------//

            // Algorithm 15:

            int num6 = int.Parse(Console.ReadLine());
            int j = 1;
            int count = 0;
            while (j <= num6)
            {
                int r2 = num6 % j;
                if (r2 == 0)
                {
                    count++;
                }
                j++;
            }
            Console.WriteLine(count);

            //--------------------------------------------------//

            // Algorithm 16:

            int num7 = int.Parse(Console.ReadLine());
            int k = 1;
            int count2 = 0;
            while (k <= num7)
            {
                int r2 = num7 % k;
                if (r2 == 0)
                {
                    count2++;
                }
                k++;
            }
            string result = (count2 == 2) ? "Adad avval hast" : "Adad avval nist!!!";
            Console.WriteLine(result);

            //--------------------------------------------------//

            // Algorithm 17:

            int p = int.Parse(Console.ReadLine());
            int num8 = 2;
            while(num8 <= p)
            {
                int i = 1;
                int count3 = 0;
                while(i <= num8)
                {
                    int r = num8 % i;
                    if (r == 0) { 
                        count3++;
                    }
                    i++;
                }
             if(count3 == 2)
                {
                    Console.WriteLine(num8);
                }
                num8++;
            }
#endif

        }
    }
}
