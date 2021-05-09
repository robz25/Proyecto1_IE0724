#ifndef CLASS_PUNTO
#define CLASS_PUNTO

#include <string>

/**
 * @brief Un punto con coordenadas X y Y en el espacio euclidiano.
 *
 */
class Punto {
 private:
  /**
   * @brief Valor X del punto.
   *
   */
  float x;

  /**
   * @brief Valor Y del punto.
   *
   */
  float y;

  /**
   * @brief Expresión regular para chequear formato de los puntos ingresados.
   *
   */
  static std::string regexStr;

 public:
  /**
   * @brief Destructor de un punto.
   *
   */
  ~Punto();

  /**
   * @brief Crea un nuevo punto a partir de un string en el formato "f,f" con f
   * números en punto flotante.
   *
   * @param coordenada String con el formato "f,f" con f números en punto
   * flotante.
   */
  Punto(std::string coordenada);

  /**
   * @brief Obtiene el valor de X.
   *
   * @return float El valor de X.
   */
  float getX(void);

  /**
   * @brief Obtiene el valor de Y.
   *
   * @return float El valor de Y.
   */
  float getY(void);

  /**
   * @brief Asigna el valor de X.
   *
   * @param x El valor de X.
   */
  void setX(float x);

  /**
   * @brief Asigna el valor de Y.
   *
   * @param y El valor de Y.
   */
  void setY(float y);

  /**
   * @brief Obtiene una representación de un punto. Devuelve puntos decimales
   * fijos.
   *
   * @return std::string Representacion en texto del punto.
   */
  std::string getPuntoStr();

  /**
   * @brief Obtiene una representación de un punto. Devuelve puntos decimales
   * fijos.
   *
   * @return std::string Representacion en texto del punto con formato correcto.
   */
//  std::string getPuntoFormateado();

  /**
   * @brief Imprime una representación de un punto.
   *
   */
  void printPunto();
};

#endif
