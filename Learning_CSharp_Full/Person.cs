using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class Person
    {
        public DateTime timeee;
        public string fname { get; set; }
        public string fname2 { get; set; }
        public string fname3 { get; set; }


        
        public override string ToString()
        {
            return fname + fname2 + fname3;
        }
    }
}
