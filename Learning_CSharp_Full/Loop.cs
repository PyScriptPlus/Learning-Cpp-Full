using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Loop
    {
        static void Loops(string[] args)
        {

            // Syntax while:
            /*
                while(condition)
                {
                 Body
                }
            */
            /*
            bool x = true;
            int y = 4;
            while (y >= 2 || x)
            {
                Console.WriteLine("Start fan");
                y--;
                if(y == 0)
                {
                    x = false;
                }
            }
            
            Console.WriteLine("Stop fan");
            */

            // Adad zoj chap kon va hamaro dar akhar jam' kon
            // 2 ta 50
            /*
            int number = 2;
            int res = 0;
            while(number <= 50)
            {
                Console.WriteLine(number);
                res += number;
                number += 2;
            }
            Console.WriteLine("\nres: \n");
            Console.WriteLine(res);
            */


            // Jadvad zarb ba While:
            int x = 1;
            while (x <= 10)
            {
                int j = 1;
                while (j <= 10)
                {
                    Console.Write(x * j + "\t");
                    j++;
                }
                x++;
                Console.WriteLine();
            }

            // Syntax do While:
            /*
                do
                {

                } while (condition);
            */

            Console.WriteLine("\n=============================\n");
            /*
            bool rotate = false;
            int z = 13;
            int pz = 1;
            do
            {
                Console.Write("Pleas enter 10 (ON) or 0 (OF) fan: ");
                int temp = int.Parse(Console.ReadLine());
                if (temp == 10)
                {
                    while(z >= 9)
                    {
                        Console.WriteLine("Test fan: " + pz);
                        pz++;
                        z--;
                    }
                }
                else if(temp == 0)
                {
                    Console.WriteLine("Fan is OFF");
                }


            } while (rotate);
            */

            // Syntax for:
            /*
                for(initialization ; condition ; increment OR decrement)
                {
                    Body
                }
            */

            /*
            // Input integer az user ba'ad on adad dar jadval zarb neshon bede
            Console.Write("Enter your Number: ");
            int i = int.Parse(Console.ReadLine());
                for(int j = 1; j <= 10; j++)
                {
                    Console.WriteLine(j * i);
                }
            //Console.WriteLine();
            */

            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

            // Bar'aks: 
            Console.WriteLine("\n=============================\n");

            for (int i = 1; i <= 5; i++)
            {
                for (int j = 5; j >= i; j--)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

            Console.WriteLine("\n=============================\n");

            string[] cars = {"Benz", "BMW", "Lamborghini", "Ferrari"};
            foreach(string allCars in cars)
            {
                Console.WriteLine($"Car: {allCars} has lenghth: {allCars.Length}");
            }

        }
    }
}
