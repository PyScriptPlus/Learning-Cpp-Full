using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Professional_Constructor
{
    public class constructor_Professional
    {
        static void Construct()
        {
            Texas.Paris tx = new();
            French.Paris fr = new(tx.y);
            tx.print();
            fr.print();
        }
    }
}
