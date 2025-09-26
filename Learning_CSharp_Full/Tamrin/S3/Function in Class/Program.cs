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

        static void func(string[] args)
        {

            printHello();

            // In baraye functioni hast ke bedon static hast
            // Chera new estefade shode? Rezerve hafeze baraye Object
            Program obj = new Program();
            obj.add(3, 2);

            // Vali age static bashe bedon new mishe 
            // Dast rasi peyda kard 
            Console.WriteLine(multiplication(5, 5)); 


            void printHello() // Local Function
            {
                Console.WriteLine("Hello");
                return;
            }
        }
    }
}
