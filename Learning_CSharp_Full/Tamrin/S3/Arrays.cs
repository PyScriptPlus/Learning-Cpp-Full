using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class Arrays
    {
        static void Array(string[] args)
        {


            // Array One dimensional:
            string[] names = new string[6]
            {"Ali", "Hassan", "Reza", "Mohammad","Taha", "Amir"};

            Console.WriteLine("=================for================");
            for (int i = 0; i < names.Length; i++)
            {
                Console.WriteLine(names[i]);
            }

            Console.WriteLine("=================while================");
            int j = 0;
            while (j < names.Length)
            {
                Console.WriteLine(names[j]);
                j++;
            }

            Console.WriteLine("=================foreach================");
            foreach (var items in names)
            {
                Console.WriteLine(items);
            }

            // Array Two dimensional:
            string[,] lnames =
            {
                {"Rezaei","Rahimi","Hassanzadeh"},
                {"Hosseinzadeh","RezaZadeh","Valizadeh"}

            };

            Console.WriteLine("=================for================");

            for (int i = 0; i <= lnames.GetUpperBound(0); i++)
            {
                for (int k = 0; k <= lnames.GetUpperBound(1); k++)
                {
                    Console.WriteLine(lnames[i, k]);
                }
            }

            Console.WriteLine("=================while================");

            int x = 0;
            while (x <= lnames.GetUpperBound(0))
            {
                int y = 0;
                while (y <= lnames.GetUpperBound(1))
                {
                    Console.WriteLine(lnames[x, y]);
                    y++;
                }
                x++;
            }

            Console.WriteLine("=================foreach================");

            foreach (var items2 in lnames)
            {
                Console.WriteLine(items2);
            }

            // Array Three dimensional:
            int[,,] numbers = new int[2, 2, 3]
            {
                {
                    {18,22,20},
                    {5,41,55}
                },
                {
                    {64,54,32},
                    {37,14,10}
                }
            };

            Console.WriteLine("=========================");
            Console.WriteLine(numbers[0, 1, 2]); // 55

            Console.WriteLine("=================foreach================");

            foreach (int allNum in numbers)
                Console.WriteLine(allNum);

            Console.WriteLine("=================for================");

            for (int y = 0; y <= numbers.GetUpperBound(0); y++)
            {
                for (int i = 0; i <= numbers.GetUpperBound(1); i++)
                {
                    for (int k = 0; k <= numbers.GetUpperBound(2); k++)
                    {
                        Console.WriteLine(numbers[y, i, k]);
                    }
                }
            }

            Console.WriteLine("=================while================");

            int n = 0;
            while (n <= numbers.GetUpperBound(0))
            {
                int p = 0;
                while (p <= numbers.GetUpperBound(1))
                {
                    int o = 0;
                    while (o <= numbers.GetUpperBound(2))
                    {
                        Console.WriteLine(numbers[n, p, o]);
                        o++;
                    }
                    p++;
                }
                n++;
            }

            // Jagged arrays
            char[][] chars =
            {
                new[] {'A','B','C'},
                new[] {'D','E','F','G'}
            };

            Console.WriteLine("=================foreach================");

            foreach (var allChars in chars)
                Console.WriteLine(allChars);

            Console.WriteLine("=================for================");


            for (int i = 0; i <= chars.GetUpperBound(0); i++)
            {
                for (int k = 0; k <= chars[i].GetUpperBound(0); k++)
                {
                    Console.WriteLine(chars[i][k]);
                }
            }

            Console.WriteLine("=================while================");

            int u = 0;
            while (u <= chars.GetUpperBound(0))
            {
                int l = 0;
                while (l <= chars[u].GetUpperBound(0))
                {
                    Console.WriteLine(chars[u][l]);
                    l++;
                }
                u++;
            }

            Console.WriteLine("=========================");
            Console.WriteLine(chars[1][3]);












            //Console.WriteLine(chars[][0,0]);

            //int[] ages = new int[5];
            //ages[0] = 17;
            //ages[1] = 20;
            //ages[2] = 21;
            //ages[3] = 50;
            //ages[4] = 35;
            //ages[5] = 18;

            //string[] names = { "Ali", "Hassan", "Reza", "Taha" };

            //IEnumerator nameAll = names.GetEnumerator();

            //while (nameAll.MoveNext())
            //{
            //    Console.WriteLine(nameAll.Current);
            //}




            //Console.WriteLine("===========================================");

            //for(int x = 0; x < names.Length; x++)
            //{
            //    Console.WriteLine(names[x]);
            //}


            //Console.WriteLine("===========================================");

            //int i = 0;
            //while(i < names.Length)
            //{
            //    Console.WriteLine(names[i]);
            //    i++;
            //}

            //Console.WriteLine("===========================================");

            //foreach(string itemss in names)
            //{
            //    Console.WriteLine(itemss);
            //}

            /////----------------------------------------------------------------///

            //Console.WriteLine("===========================================");

            //string[,] people = new string[2, 6]
            //{
            //    {"Ali", "Hassan", "Reza", "Taha","Yasin", "Mamad"},
            //    {"Daniel", "Karim", "Asghar", "AmirHossein","Mehdi", "Mahdi"}
            //};
            //Console.WriteLine("===========================================");
            //Console.WriteLine(people[0,2]);
            //Console.WriteLine("===========================================");
            //foreach (var peoples in people)
            //{
            //    Console.WriteLine(peoples);
            //}
            //Console.WriteLine("===========================================");

            //for(int j = 0; j < people.Length; j++)
            //{
            //    Console.WriteLine(people[0,j]);
            //}



            //char[,,] names2 = new char[2, 2, 3]
            //    {

            //        {
            //            {'A','B','C'},
            //            {'D','E','F'}
            //        },
            //        {
            //            {'G','H','I'},
            //            {'J','K','L'}
            //        }

            //    };


            ////------------------------Jagged-------------------------//

            //string[][,] lname =
            //{
            //    new string[,]
            //    {
            //        {"Yousefi"}
            //    },
            //    new[,] {
            //        { "Hassanzadeh", "Akbarzadeh" },
            //        {"RezaZadeh","Valizadeh"}
            //    }
            //};

            //int[][] kl =
            //{
            //    new int[][,]
            //    {
            //        {2,3 },
            //    }
            //};

        }
    }
}




