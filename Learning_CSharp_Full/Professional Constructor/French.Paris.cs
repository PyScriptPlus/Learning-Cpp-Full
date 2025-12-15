using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace French
{
    public class Paris
    {
        int y = default;
        public Paris(int x)
        {
            Console.WriteLine("In constructor: " + x);
            y = x;
            Console.WriteLine("In constructor: " + y);
        }
        public void print()
        {
            Console.WriteLine("Hello French!");
            Console.WriteLine("In Function: " + y);
        }
    }
}
