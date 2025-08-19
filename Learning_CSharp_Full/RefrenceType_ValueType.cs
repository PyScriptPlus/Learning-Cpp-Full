using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace Learning_CSharp_Full
{
    public class RefrenceType_ValueType
    {
        
        static void Refrences(string[] args)
        {
            Person person = new();
            person.timeee = new(2025, 08, 15);
            //Console.WriteLine(person.timeee);

            //Console.WriteLine(sizeof(Person));
            //person.fname = "Ali";
            //person.fname2 = "Hassan";

            //person.fname = person.fname2;

            //Console.WriteLine(person.fname);
            //Console.WriteLine(person.fname2);

            List<int> numbers = new();
            numbers.Add(10);
            //numbers.Remove(10);
            numbers.Add(20);
            numbers.Add(20);
            numbers.Add(20);
            numbers.Add(20);
            foreach (int num in numbers)
            {
                Console.WriteLine(num);
            }

            //-----------------------------------//

            List<Person> people = new List<Person>()
            {
                new Person() {fname = "Ali"},
                new() {fname2 = "MamaD"}

            };
            people.Add(new Person() { fname3 = "Amir" });


            //Console.WriteLine(people[0]);
            foreach (Person fnames in people)
            {
                Console.WriteLine(fnames);
            }

            //people.Add(person); // All address Property

            
    }
    }
}
