#ifndef GESTIONNAIREAUTEURS_H
#define GESTIONNAIREAUTEURS_H

#include <string>
#include "Auteur.h"
#include <vector>
#include <iostream>

class GestionnaireAuteurs
{
public:
    GestionnaireAuteurs();
    Auteur* chercherAuteur(const std::string& nomAuteur);
    bool chargerDepuisFichier(const std::string& nomFichier);
    friend std::ostream& operator<<(std::ostream& os, const GestionnaireAuteurs& gestionnaire);
    bool operator+=(const Auteur& auteur);
    std::size_t getNbAuteurs() const;
    static constexpr std::size_t NB_AUTEURS_MAX = 16;

private:
    bool lireLigneAuteur(const std::string& ligne);
    std::vector<Auteur> auteurs_;
    std::size_t nbAuteurs_;
};

#endif // GESTIONNAIREAUTEURS_H