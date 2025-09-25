using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Learning_CSharp_Full.Tamrin.S3
{
    internal class Inner_Exception
    {
        static void Nested_Exception()
        {
            #region BedonError
            
            string fileName = "salam.txt";
            string writeContect = ("Hello C#\n");
            try
            {
                try
                {
                    File.WriteAllText(fileName, writeContect);
                    string readOnlyTextFile = File.ReadAllText(fileName);
                    Console.WriteLine(readOnlyTextFile);
                }
                catch (Exception)
                {
                    throw new Exception($"File: {fileName} peyda nashod!");
                    //throw new Exception(null);
                    //Console.WriteLine(msg1.Message);
                }
            }
            catch (Exception msg2)
            {
                Console.WriteLine(msg2.Message);
                Console.WriteLine(msg2.InnerException?.Message);
            }

            #endregion

            #region Error mide age Null bashe
            /*
            string fileName = "dd.txt";
            //string writeContect = ("Hello C#\n");
            try
            {
                try
                {
                    //File.WriteAllText(fileName, writeContect);
                    string readOnlyTextFile = File.ReadAllText(fileName);
                    Console.WriteLine(readOnlyTextFile);
                }
                catch (Exception)
                {
                    //throw new Exception($"File: {fileName} peyda nashod!");
                    throw new Exception(null);
                    //Console.WriteLine(msg1.Message);
                }
            }
            catch (Exception msg2)
            {
                Console.WriteLine(msg2.Message);
                Console.WriteLine(msg2.InnerException.Message);
            }
            */
            #endregion

            #region Null pazir kardan OR Null-conditional Operator ( ? )
            /*
            string fileName = "dd.txt";
            //string writeContect = ("Hello C#\n");
            try
            {
                try
                {
                    //File.WriteAllText(fileName, writeContect);
                    string readOnlyTextFile = File.ReadAllText(fileName);
                    Console.WriteLine(readOnlyTextFile);
                }
                catch (Exception)
                {
                    //throw new Exception($"File: {fileName} peyda nashod!");
                    throw new Exception(null);
                    //Console.WriteLine(msg1.Message);
                }
            }
            catch (Exception msg2)
            {
                Console.WriteLine(msg2.Message);
                Console.WriteLine(msg2.InnerException?.Message);
            }
            */
            #endregion

            Console.ReadLine(); 
        }
    }
}
