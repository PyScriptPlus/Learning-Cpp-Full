using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace Learning_CSharp_Full
{
    internal class xmlFile
    {
        static void XML(string[] args)
        {
            var xmlFile = new XmlDocument();
            XmlDocument xml = new XmlDocument();

            var file = File.CreateText("Mamad.txt");
            StreamWriter writer = File.CreateText("Mamad.txt2");
            
        }
    }
}
