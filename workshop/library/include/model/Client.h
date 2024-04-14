#ifndef CLIENT_H

#define CLIENT_H

#include <string>



    /**

     * @brief Klasa reprezentująca klienta.

     *

     * Klasa ta zawiera informacje o kliencie, takie jak imię, nazwisko i numer personalny.

     */

class Client {

private:

    std::string firstName; /**< Imię klienta */

    std::string lastName; /**< Nazwisko klienta */

    const std::string personalID; /**< Numer personalny klienta */



public:

   /**

    * @brief Konstruktor parametrowy klasy Client.

    *

    * @param firstName Imię klienta.

    * @param lastName Nazwisko klienta.

    * @param personalID Numer personalny klienta.

    */

    Client(const std::string& firstName, const std::string& lastName, const std::string& personalID);



    /**

     * @brief Metoda pobierająca informacje o kliencie.

     *

     * Zwraca informacje o kliencie, takie jak imię, nazwisko i numer personalny, w formie łańcucha znaków.

     *

     * @return Informacje o kliencie w formie łańcucha znaków.

     */

    std::string getInfo() const;



    /**

     * @brief Metoda ustawiająca imię klienta.

     *

     * Ustawia nowe imię klienta. Jeśli nowe imię jest puste, nie zmienia wartości pola.

     *

     * @param newFirstName Nowe imię klienta.

     */

    void setFirstName(const std::string& firstName);



    /**

     * @brief Metoda pobierająca imię klienta.

     *

     * @return Imię klienta.

     */

    const std::string& getFirstName() const;



    /**

     * @brief Metoda ustawiająca nazwisko klienta.

     *

     * Ustawia nowe nazwisko klienta. Jeśli nowe nazwisko jest puste, nie zmienia wartości pola.

     *

     * @param newLastName Nowe nazwisko klienta.

     */

    void setLastName(const std::string& lastName);



    /**

     * @brief Metoda pobierająca nazwisko klienta.

     *

     * @return Nazwisko klienta.

     */

    const std::string& getLastName() const;



    /**

     * @brief Metoda pobierająca numer personalny klienta.

     *

     * @return Numer personalny klienta.

     */

    const std::string& getPersonalID() const;



    /**

     * @brief Destruktor klasy Client.

     *

     * Niszczy obiekt klasy Client.

     */

    ~Client();

};

#endif