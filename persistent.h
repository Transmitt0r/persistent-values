//
// Created by Lukas Grotz on 03.11.17.
//

#ifndef PERSISTENTE_WERTE_PERSISTENT_H
#define PERSISTENTE_WERTE_PERSISTENT_H

#include <string>
#include <fstream>

template <class type>
class persistent {
private:
std::string dateipfad_;
type wert_;
public:
/*Konstruktor: parameter ist der dateipfad als String*/
persistent(std::string dateipfad){
        dateipfad_ = dateipfad;

        /*Öffne den dateistream am ort dateipfad_, lesen und schreiben, binärdatei*/
        std::fstream file(dateipfad_, std::ios::in | std::ios::out | std::ios::binary);
        /*überprüft ob Datei vorhanden ist. vorhanden = geöffnet*/
        if (file.is_open()) {
                /*Bewege "Cursor" zum Anfang der Datei*/
                file.seekg(0, file.beg);
                /*Lese inhalt der Binärdatei in die Adresse von wert_ ein, typecast muss sein. Gelesenes datenpacket hat die größe sizeof(type)*/
                file.read((char*) &wert_, sizeof(type));
        } else {
                /*erstellt Datei, in dem sie geöffnet wird*/
                file.open(dateipfad_, std::ios::out | std::ios::binary);
        }

        /*Schließe dateistream*/
        file.close();
};

/*Destruktor*/
~persistent(void){
}

/*Überladung des Zuweisungsoperators*/
type operator=(type wert){
        wert_ = wert;

        /*Öffne den dateistream wie im konstruktor, jedoch nur zum schreiben. trunc löscht den inhalt der datei, falls etwas darin steht*/
        std::fstream outfile(dateipfad_, std::ios::out | std::ios::binary | std::ios::trunc);
        /*Schreibe von der Adresse von wert_ in die Datei, ein Datenpacket der größe sizeof(type). auch hier muss der typecast wieder sein*/
        outfile.write((char*)&wert_, sizeof(type));
        /*Schließe den dateistream*/
        outfile.close();
        return wert_;
};

/*Getter*/
type get_wert(){
        return wert_;
};

/*Typecastüberladung für Zuweisungen*/
operator type() {
        return (type)wert_;
};

/*Überladung Ausgabeoperator*/
friend std ::ostream & operator << (std::ostream & o, persistent & p){
        return o<< p.get_wert();
}
};


#endif //PERSISTENTE_WERTE_PERSISTENT_H
