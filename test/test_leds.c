/************************************************************************************************
Copyright 2024, Testing de Software en Sistemas Embebidos
Facultad de Ingenieria
Universidad Nacional de Buenos Aires

Copyright (c) 2023, Martin Paura Bersan <mpb39212@gmail.comr>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

/************************************************************************************************
- Voy a prender un led y volver a apagarlo para ver si se apaga.
- Prender dos leds, apagar uno, y ver que solo se apaga el que corresponde y que el otro sigue prendido.
- Prender todos los leds juntos.
- Prender y apagar todos los leds juntos.
- Prender un led, voy a consultar el estado y tiene que figurar como prendido
- Voy a consultar el estado de un led apagado y tiene que figurar como apagado.
- Revisar que los leds estan bien mapeados en la memoria.
*************************************************************************************************/



/** @file test_led.c
 ** @brief Definicion de las funciones de prueba del proyecto
 **/

/* === Headers files inclusions =============================================================== */
#include "unity.h"
#include "leds.h"

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================== */


//Al arrancar el sistema todos los leds tienen que estar apagados.
/**
 * @brief Funcion para testear el funcionamiento del driver de los leds en el arranque
 * 
 */
void test_todos_los_leds_deben_arrancar_apagados(void) {
    uint16_t puerto_virtual = 0xFFFF; //la inicializo en 0xFFFF para poder verificar que apaga todos los leds

    leds_init(&puerto_virtual);
    TEST_ASSERT_EQUAL_HEX16(0x0000, puerto_virtual);  //Verifico que haya dejado el puerto en 0x0000
}

//Despues de arrancar el sistema, con todos los leds apagados, voy a prender un led cualquiera.
/**
 * @brief 
 * 
 */
void test_prender_un_solo_led(void){
    uint16_t puerto_virtual = 0xFFFF; //la inicializo en 0x0000 para poder verificar que apaga todos los leds 
 
    leds_init(&puerto_virtual); //todas las pruebas tienen que arrancar desde el sistema en estado reset y llevarla al estado de prueba
    led_turn_on(3);            //Cuando diseño las pruebas trato de no pensar en como se van a implementar las funciones
    TEST_ASSERT_EQUAL_HEX16(1 << 2, puerto_virtual);  //recordar que el bit inicializa contando desde 1 por eso el shift es por 2
}



/* === End of documentation ==================================================================== */