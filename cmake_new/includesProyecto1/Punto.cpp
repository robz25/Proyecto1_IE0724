//#include "Punto.hh"
#include "Punto.hh"
#include "Util.hh"

#include <cmath>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>

//#include "Util.hh"

// Acepta espacios antes y después del primer y segundo número, requiere una
// coma entre los dos números.
std::string Punto::regexStr =
    "\\s*(-{0,1}\\d+\\.{0,1}\\d*)\\s*,\\s*(-{0,1}\\d+\\.{0,1}\\d*)\\s*";

Punto::Punto(std::string coordenada) {
  // Se comprueba el formato del punto.
  if (Util::isRegexMatch(coordenada, Punto::regexStr)) {
    // Se obtienen los valores de X y Y.
    std::vector<std::string>::iterator it;
    std::smatch m;
    std::regex_search(coordenada, m, std::regex(Punto::regexStr));
    // Se almacenan los valores de X y Y en el objeto.
    this->setX(std::stof(m[1].str().data()));
    this->setY(std::stof(m[2].str().data()));
  } else {
    // Se tira un error ante un formato incorrecto.
    throw std::invalid_argument(
        "El formato debe ser: '[float],[float]', por ejemplo 5, 6.54.");
  }
}

Punto::~Punto() { return; }

void Punto::setX(float x) { this->x = x; }

void Punto::setY(float y) { this->y = y; }

float Punto::getX() { return this->x; }

float Punto::getY() { return this->y; }

std::string Punto::getPuntoStr() {
  return "(" + std::to_string(this->getX()) + "," +
         std::to_string(this->getY()) + ")";
}

/*std::string Punto::getPuntoFormateado(){//retorna linea con puntos en forma solicitado
  return std::to_string(this->getX()) + " " + std::to_string(this->getY());
}
*/

void Punto::printPunto() {
  std::cout << "(" << this->getX() << "," << this->getY() << ")";
}

/*int main(){
	return 0;
}*/

