
#include <iostream>
#include <string>

struct Format {
    std::string nom;
    int octets;
    bool couleur, transparence, flottants;
};

Format formats[] = {
    {"GRAY8", 1, false, false, false},
    {"GRAY_A16", 2, false, true, false},
    {"RGB24", 3, true, false, false},
    {"RGBA32", 4, true, true, false},
    {"RGB96F", 12, true, false, true},
    {"RGBA128F", 16, true, true, true}
};

const int NB_FORMATS = 6;

const Format* chercherFormat(const std::string& nom) 
{
    for (int i = 0; i < NB_FORMATS; i++) 
    {
        if (formats[i].nom == nom) 
        {
            return &formats[i];
        }
    }
    return nullptr;
}

int main() {
    unsigned long long w, h;
    int a;

    std::cin >> w >> h;
    std::cin >> a;

    unsigned long long total = 0;
    int sansPerte = 0;
    int refuses = 0;

    for (int i = 0; i < a; i++) {
        std::string Nomsource, Nomdecible;
        std::cin >> Nomsource >> Nomdecible;
        const Format* src = chercherFormat(Nomsource);
        const Format* cible = chercherFormat(Nomdecible);

        if (src == nullptr || cible == nullptr) {
            std::cout << Nomsource << " " << Nomdecible << " REFUSE\n";
            refuses++;
            continue;
        }
        unsigned long long pixels = w * h;
        unsigned long long octetsSources = pixels * src->octets;
        unsigned long long octetsCibles = pixels * cible->octets;

        std::string pertes = "";

        if (src->transparence && !cible->transparence) {
            pertes += "TRANSPARENCE";
        }
        if (src->couleur && !cible->couleur) {
            if (!pertes.empty()) pertes += "+";
            pertes += "COULEUR";
        }
        if (src->flottants && !cible->flottants) {
            if (!pertes.empty()) pertes += "+";
            pertes += "ETENDUE";
        }
        if (pertes.empty()) {
            pertes = "AUCUNE";
            sansPerte++;
        }
        std::cout << Nomsource << " " << Nomdecible << " " << octetsSources << " " << octetsCibles << " "
         << pertes << "\n";
        total += octetsCibles;
    }

    std::cout << "TOTAL " << total << "\n";
    std::cout << "SANS_PERTE " << sansPerte << "\n";
    std::cout << "REFUSES " << refuses << "\n";

    return 0;
}