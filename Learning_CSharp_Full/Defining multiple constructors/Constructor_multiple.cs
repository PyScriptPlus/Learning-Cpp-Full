using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Defining_multiple_constructors
{
    public class Constructor_multiple
    {
        public string fname;
        public string lname;
        public int age;
        public DateTime born;

        public Constructor_multiple
        (string Firstname, string Lastname, int _age, DateTime _born)
        {
            fname = Firstname;
            lname = Lastname;
            age = _age;
            born = _born;
        }
        public void printStatus()
        {
            Console.WriteLine("Your name is: {0} and lname: {1}",
                fname,lname);
            Console.WriteLine("Your age is: {0}", age);
            Console.WriteLine("Your born is: {0}", born);
        }
    }
}
