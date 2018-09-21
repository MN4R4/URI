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

            int a = Convert.ToInt32(Console.ReadLine());
            int cont = 0;
            while (cont < a)
            {
                cont++;
                string b = Console.ReadLine();
                int c = Convert.ToInt32(Console.ReadLine());
                int d = 0;
                int f = 0;
                string e = "";
                for (int i = 0; i < b.Length; i++)
                {
                    d = Convert.ToInt32(b[i]);
                    if (d - c < 65)
                    {
                        f = (d - c) + 26;
                        e += Convert.ToChar(f);
                    }
                    else
                    {
                        f = d - c;
                        e += Convert.ToChar(f);
                    }
                }
                Console.WriteLine(e);
            }
            Console.ReadLine();
        }
    }
}
