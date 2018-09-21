using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1763
{
    class Program
    {
        static void Main(string[] args)
        {
            string a;
            string [] pais =
            {
             "brasil", "alemanha", "austria", "coreia", "espanha", "grecia","estados-unidos",
             "inglaterra","australia","portugal","suecia","turquia","argentina","chile","mexico",
             "antardida","canada","irlanda","belgica","italia","libia","siria","marrocos","japao","ng"
            };
            string[] comp =
            {
             "Feliz Natal!","Frohliche Weihnachten!","Frohe Weihnacht!","Chuk Sung Tan!","Feliz Navidad!",
             "Kala Christougena!","Merry Christmas!","Merry Christmas!","Merry Christmas!","Feliz Natal!",
             "God Jul!","Mutlu Noeller","Feliz Navidad!","Feliz Navidad!","Feliz Navidad!","Merry Christmas!",
             "Merry Christmas!","Nollaig Shona Dhuit!","Zalig Kerstfeest!","Buon Natale!","Buon Natale!",
             "Milad Mubarak!","Milad Mubarak!","Merii Kurisumasu!","--- NOT FOUND ---"
            };
            while((a = Console.ReadLine())!= null)
            {
                int resp = 0;
                for (int i = 0; i < pais.Length; i++)
                {
                    if (a == pais[i])
                    {
                        resp = i;
                        i = pais.Length;
                    }
                    else
                    {
                        resp = i;
                    } 
                    
                } 
                Console.WriteLine(comp[resp]);
            }
        }
    }
}
