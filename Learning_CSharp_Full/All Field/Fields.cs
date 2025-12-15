using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.All_Field
{
    public class Fields
    {
        public const string? fname = "Mamad"; // const field
        public readonly string lname = "Cplus-Cplus"; // readonly field
        // Faghat dar zaman Constructor ya sakht instance 
        // Meghdar dahi mishe ba'ad az ina nemishe das zad

        public Fields()
        {
            lname = "Yousefi";
        }

        public required int rand; // Requiring fields
        // Henghame sakht Instance hatman bayad meghdar dahi kard
        // Vagarne error mide !!! ejbarie
        // Ba'ad az sakht Instance mishe taghir dad

    }
}
