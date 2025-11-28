using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Property
{
    public class Power
    {
        // Property ma'moli:
        // Khodesh yek Field dar posht sahne ijad mikone
        // Lazem nist khodesh Automatic okey mikone
        public int MyProperty { get; set; }

        // Property full:
        // Mishe taghirat dad control kamel dasht roye
        // Maghadir dasht 
        // Field:
        private int _age;

        public int Age
        {
            get { return _age; }
            set
            {
                if (value >= 0)
                {
                    _age = value;
                }
                else
                {
                    throw new Exception("Age not is Negative");
                }
            }
        }


        // In 3 ta payini mitunim control ham roshun dashte
        // Bashim vali man khodam auto neveshtam:

        // Bayad darun on Class ke ta'rif shode setter kard
        // Va harja mitune getter kone
        public int MyProperty1 { get; private set; }

        // In init hast ya'ni ba'ad az sakhtan Instance
        // Nemituni meghdar dahi koni
        // Bayad hamon avval meghdar dahi koni dar 
        // Constructor ya dar sakht Instance 
        // Meghdar dahi koni!!! 
        // Va meghdar dahi kardanesham ham ekhtiyari hast!!!
        public int MyProperty2 { get; init; }

        // In ejbari hast ghabl az sakht Instance
        // Meghdar dahi shavad dar Constructor ya
        // Dar sakht Instance bayad meghdar dahi koni!!!
        // Meghdar dahi nakoni Error Compile-Time migiri
        public required int MyProperty3 { get; set; }

        // Constructor 
        [SetsRequiredMembers]// In Attribute lazeme baraye required!!! ejbari!!!
        public Power()
        {
            MyProperty1 = 200;
            MyProperty2 = 201;
            MyProperty3 = 202;
        }


        // Field:
        private string _fname;
        // Prop:
        public string MyProperty4
        {
            set
            {
                _fname = value;
            }
        }

        // Khodemun ham mitunim Getter benevisim
        // Faghat Getter kone setter nemishe!!!

        // lambda expression body syntax
        public string Getter => $"Hello {_fname} " + "Welcome!";

    }
}
