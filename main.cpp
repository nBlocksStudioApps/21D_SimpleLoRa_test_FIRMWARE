
/* ================================================================ *
 *          Automatically generated by n-Blocks Studio 2.0          *
 *                                                                  *
 *                         www.n-blocks.net                         *
 * ================================================================ */
#include "nlib\nblocks.h"
#include "nlib\BSP\bsp.h"
// Custom nodes:
#include "nlib\Ticker\ticker.h"
#include "nlib\Counter\counter.h"
#include "nlib\StringFormat\stringformat.h"
#include "nlib\SimpleLoRa\SimpleLoRa.h"

// -*-*- List of node objects -*-*-
nBlock_Ticker            nb_nBlockNode0_Ticker       (5000);
nBlock_Counter           nb_nBlockNode1_Counter      (12);
nBlock_StringFormat      nb_nBlockNode2_StringFormat ("TXboard Counter=%d ");
nBlock_SimpleLoRa        nb_nBlockNode3_SimpleLoRa   (true, 868.0, 0x00, 0x08, 4, 9, 250.0, false, false, 20, PA_7, PA_6, PB_3, PA_15, PC_0, PB_4, PB_1, 0, POWER_0, PA_12, true, PB_6, PB_7);

// -*-*- List of connection objects -*-*-
nBlockConnection    n_conn0( &nb_nBlockNode2_StringFormat, 0,    &nb_nBlockNode3_SimpleLoRa,   0);
nBlockConnection    n_conn1( &nb_nBlockNode1_Counter,      0,    &nb_nBlockNode2_StringFormat, 0);
nBlockConnection    n_conn2( &nb_nBlockNode0_Ticker,       0,    &nb_nBlockNode1_Counter,      0);


// -*-*- Main function -*-*-
int main(void) {
    SetupWorkbench();
    while(1) {
        ProgressNodes();
        
        // Your custom code here!
    }
}
