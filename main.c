#include <avr/io.h>
#include <util/delay.h>


int main(){

    DDRB = 0b00011100; // Variante 1

     while (1) {

        PORTB = 0b00010000; //Port 4 high   red LED ON
        _delay_ms(2000);    //Wait 2 sec
        PORTB = 0b00000000; // Port 4 Low   red LED OFF
        _delay_ms(100);    // wait 100 ms
        PORTB = 0b00000100; //Port 2 high   yellow LED ON
        _delay_ms(2000);    //Wait 2 sec
        PORTB = 0b00000100; // Port 2 Low   yellow LED OFF
        _delay_ms(100);    // wait 100 ms
        PORTB = 0b00001000; //Port 3 high   green LED ON
        _delay_ms(2000);    //Wait 2 sec
        PORTB = 0b00000000; // Port 3 Low   green LED OFF
        _delay_ms(100);    // wait 100 ms
    }
    return(1);
}