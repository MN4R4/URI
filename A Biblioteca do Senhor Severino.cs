using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace _2137
{
    class Program
    {
        static void Main(string[] args)
        {
            string a;
            int b;

            while ((a = Console.ReadLine()) != null)
            {
                b = Convert.ToInt32(a);
                ArrayList lista = new ArrayList();
                for (int i = 0; i < b; i++)
                {
                    string livro = Console.ReadLine();
                    lista.Add(livro);
                }
                lista.Sort();
                foreach (var item in lista)
                {
                    Console.WriteLine(item);
                }
            }
        }
    }
}
