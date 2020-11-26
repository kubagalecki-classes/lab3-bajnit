#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int towar_transportowany = 0;
    unsigned int zaglowce = 0;
    
    if(towar == 0){
      return zaglowce;
    }
    
    // Brakowało deklaracji stoczni
    Stocznia stocznia;

    while (towar_transportowany<towar){
      Statek* statek = stocznia();
      towar_transportowany += (statek -> transportuj());

      if(dynamic_cast<Zaglowiec*>(statek)){
        zaglowce++;
      }
      delete statek;

    }
      
    return zaglowce;
}
