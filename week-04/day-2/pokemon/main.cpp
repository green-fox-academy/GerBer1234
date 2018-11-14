#include <iostream>
#include <vector>

#include "pokemon.h"

std::vector<Pokemon> initializePokemons() {
    std::vector<Pokemon> pokemons;

    pokemons.emplace_back("Balbasaur", "leaf", "water");
    pokemons.emplace_back("Pikatchu", "electric", "water");
    pokemons.emplace_back("Charizard", "fire", "leaf");
    pokemons.emplace_back("Balbasaur", "water", "fire");
    pokemons.emplace_back("Kingler", "water", "fire");

    return pokemons;
}

int main(int argc, char *args[]) {
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();

    Pokemon wildPokemon("Oddish", "leaf", "water");

    std::string name;
    for (int i = 0; i < initializePokemons().size(); i++) {
        if(initializePokemons()[i].isEffectiveAgainst(wildPokemon)){
        name = initializePokemons()[i]._name;}
    };

    std::cout << "I choose You, " << name << std::endl;
    return 0;
}