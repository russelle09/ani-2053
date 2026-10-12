#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
struct  Groupe 
{
    string police;
    long long n, w, h;

    long long x1 = 0 , y1 = 0;
    long long x2 = 0 , y2 = 0;
};

bool placer (vector<Groupe>& groupes, long long P , long long W , long long H)
{
    long long x = P;
    long long y = P;
    long long e = 0;

    for (Groupe& g : groupes)
    {
        for (long long i = 0; i < g.n; i++)
        {
            long long rw = g.w + P ;
            long long rh = g.h + P ;

            if ( x + rw > W - P)
            {
                x = P;
                y = y + e + P;
                e = 0;
                if (x + rw > W - P)
                {
                    cerr<< "essai echoue";
                    return 1;
                }
                
            }

            if (y+ rh > g.h - P)
            {
                cerr<< "echec de l'essaie";
                return 2;
            }
            else{

                g.x1 = x;
                g.y1 = y;
                g.x2 = x;
                g.y2 = y;
            }
            // if(i == 0)
            // {
            //     g.x1 = x;
            //     g.y1 = y;
            // }

            // if (i = g.n - 1)
            // {
            //     g.x2 = x; 
            //     g.y2 = y;
            // }

            x = x + rw;
            e = max(e, rh);
        }        
    }

    return 0;
}


int main()
{
    long long P, L ;
    int G ;
    cin>> P >> L;
    cin >> G;

    if (G==0)
    {
        cout << "AUCUN" << endl;
        return 0;
    }

    vector<Groupe> groupes(G);
    long long besoin = 0;
    long long occupe = 0;
    
    for (Groupe& g : groupes)
    {
        cin >> g.police >> g.n >> g.w >> g.h;
        besoin += g.n * (g.w + P) * (g.h + P);
        occupe += g.n * g.w * g.h;
    }

    long long W = 0;
    
    if (L == 0)
    {
        W = 512;

        while (W * W < 2 * besoin && W < 4096)
        {
            W *= 2;
        
        }
    }

    long long H = W;

    for (int essai = 1 ; essai <= 8; essai++)
    {
        if( placer (groupes, P ,W , H))
        {
           cout << "ESSAIE " << essai << endl;
           cout << "TEXTURE" << W << " "<< H  <<endl;

           for (Groupe& g : groupes)
           {
                cout << g.police << " " << g.y1 << " " << g.x2 << " " << g.y2 << endl;
           }

           cout << "OCCUPE " << occupe << endl;
           long long perdu = (W * H - occupe) * 100 / (W * H);
           cout << "PERDU " << perdu <<endl;
           return 0;
        }

        if ( essai < 8)
        {
            if(W== H)
            {
                W *= 2;
            }
            else
            {
                H = W;
            }

        }
    }
    
    cout << "ESSAIS 8" << "ECHEC" << endl;
    return 0;
}