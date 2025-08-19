using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full
{
    internal class RawString_Literal
    {
        static void RawString(string[] args)
        {
            string fname = "Mohammad", city = "Tehran";
            int age = 18;
            // Raw String Literal: """  json  """

            string json = """
        {
           "fName": "MamaD",
           "lName": "Yousefi",
           "PhoneNumber": "(+98) 9307830811"
        }    
        """;

            Console.WriteLine(json);
            //----------------------------------//
            Console.WriteLine();
            Console.WriteLine("=====================================");
            Console.WriteLine();
            //----------------------------------//
            string json2 =
              $$"""
               {
                  "fName": "{{fname}}",
                  "Age": {{age}},
                  "City": "{{city}}"
               }
               """;
            Console.WriteLine(json2);
        }
    }
}
