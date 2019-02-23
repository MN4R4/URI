using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2808
{
    class Program
    {
        static void Main(string[] args)
        {

            string[] a = new string[] { "roraima", "acre", "amapa", "amazonas",
            "para", "rondonia", "tocantins" };
            string b = Console.ReadLine().ToLower();
            int c = 0;
            for (int i = 0; i < 7; i++)
            {
                if (b == a[i]) c++;
            }
            string message = (c >= 1) ? "Regiao Norte" : "Outra regiao";
            Console.WriteLine(message);
            Console.ReadLine();
        }
    }
}
