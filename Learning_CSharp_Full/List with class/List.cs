using Learning_CSharp_Full.List_with_class;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    public class List
    {
        static void Listt()
        {
            Random rnd = new();
            Person2 dsd = new();
            int y = default;
            for (int i = 0; i <= rnd.Next(); i++)
            {
                ++y;
            }

            List<Person2> pr = new();

            pr.Add(new Person2 { number =  y});
            for (int j = 0; j < pr.Count; j++)
            {
                Console.WriteLine(pr[j].number);
            }


        }
    }
}
