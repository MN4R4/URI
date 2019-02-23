using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1068
{
    class Program
    {

        public static bool Par(string s){
            int i, j, d, m, c, f;
            j = s.Count();
            for (i = 0, d = 0, m = 0, c = 0, f = 0; i < j; i++){
                if (s[i] == '(')
                {
                    m++; c++;
                }
                else
                    if (s[i] == ')' && m != 0)
                    {
                        d++;
                        m--;
                        f++;
                    }
                    else if (s[i] == ')')
                    {
                        f++;
                    }
            }
            if (d == c && d == f) return true;
            return false;
        }

        static void Main(string[] args)
        {
            string a;
            while ((a = Console.ReadLine())!= null)
            {
                string message = ( Par(a) ? "correct" : "incorrect" ); 
                Console.WriteLine(message);
            }
        }
    }
}
