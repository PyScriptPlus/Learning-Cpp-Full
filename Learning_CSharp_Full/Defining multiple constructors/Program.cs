using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Defining_multiple_constructors
{
    public class Program
    {
        static void Main()
        {
            string fname = "Mohammad";
            string lname = "Yousefi";
            int age = 18;


            Constructor_multiple _Multiple =
                new(fname, lname, age, new(2008, 3, 14));
            _Multiple.printStatus();
        }
    }
}
