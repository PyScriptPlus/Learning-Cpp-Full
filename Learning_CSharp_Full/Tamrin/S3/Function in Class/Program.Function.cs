using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3.Class
{
    partial class Program
    {
        // Vaghti in class ro be surat yek partial minevisam
        // Ya'ni mitunim ghesmat dige sham dar yek file dige 
        // Benevisim engar ye seri chizaye in class dar in file neveshtim
        // Va yek seri dige ro toye file Program.Funcion.cs neveshtim


        // title is default parameter:
        void add(int x, int y, string title = "This Number is: ")
        {
            Console.WriteLine(title + x + " + " + y + " = " + (x + y));
        }

        static int multiplication(int x, int y)
        {
            return x * y;
        }

    }
}
