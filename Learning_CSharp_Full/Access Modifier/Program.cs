using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Access_Modifier
{
    public class Program
    {
        private int x = 50;
        static void BYe()
        {
            Program program = new();
            Console.WriteLine(program.x);

            Class cl = new();
            cl.printNumPi();

        }
        /*
            private: faghat dakhel on class ye method mishe estefade kard
            Dige nemishe kharej az on estefade kard, 
            Class ke inheritance karde ham dast rasi nadare,

            public: in public dar hameja mishe estefade kard!!

            internal: Faghat dakhel hamun assembly mishe estefade kard
            Dar project dige nemishe estefade kard!

            protected: Faghat class mitune az on estefade kone ke
            Az in class ke darunesh protected ta'rif shode
            Azash ers borde bashe Inheritance

            protected internal: In bayad dakhel hamun assembly bashe
            Ya'ni dar in project va (|)(OR) az class ers bari kone !!!
            Inja OR yekish bashe kafie
            

            private protected: Inam bayad dakhel hamun assembly bashe
            Ya'ni dar in project va (&)(AND) az class ers bari kone !!!
            Ejbarie 2 tash
       
        */
        protected const double pi = 3.14;
    }
}
