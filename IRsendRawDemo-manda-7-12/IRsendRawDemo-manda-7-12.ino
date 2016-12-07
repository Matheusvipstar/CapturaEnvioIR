/*
 * IRremote: IRsendRawDemo - demonstrates sending IR codes with sendRaw
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 *
 * IRsendRawDemo - added by AnalysIR (via www.AnalysIR.com), 24 August 2015
 *
 * This example shows how to send a RAW signal using the IRremote library.
 * The example signal is actually a 32 bit NEC signal.
 * Remote Control button: LGTV Power On/Off. 
 * Hex Value: 0x20DF10EF, 32 bits
 * 
 * It is more efficient to use the sendNEC function to send NEC signals. 
 * Use of sendRaw here, serves only as an example of using the function.
 * 
 */


#include <IRremote.h>

IRsend irsend;

void setup()
{

}

void loop() {

  
  ligarArCondicionado();
  

  delay(5000); //In this example, the signal will be repeated every 5 seconds, approximately.
}

void ligarArCondicionado(){
  int khz = 38; // 38kHz carrier frequency for the NEC protocol
  unsigned int irSignal[] = {624, 17840, 2964, 9016, 536, 488, 456, 1516, 452, 568, 464, 532, 496, 500, 528, 468, 536, 464, 532, 464, 532, 464, 536, 1432, 560, 460, 536, 460, 536, 1460, 532, 464, 536, 460, 536, 1460, 532, 1460, 456, 1540, 512, 1480, 556, 1436, 564, 460, 532, 464, 536, 460, 536, 460, 536, 460, 536, 460, 536, 464, 532, 464, 536, 460, 536, 460, 536, 488, 508, 488, 428, 572, 428, 568, 460, 536, 492, 504, 528, 468, 532, 464, 536, 464, 532, 464, 536, 460, 536, 460, 536, 460, 536, 464, 532, 464, 536, 460, 532, 464, 536, 460, 536, 488, 508, 492, 424, 568, 432, 568, 460, 1504, 528, 1468, 560, 1432, 560, 1436, 560, 2940, 3040, 8920, 560, 1436, 556, 460, 540, 460, 536, 460, 536, 460, 536, 488, 508, 488, 428, 568, 432, 564, 464, 1504, 552, 472, 536, 460, 536, 1432, 564, 460, 536, 1432, 560, 1432, 560, 1436, 556, 1456, 540, 1460, 532, 1460, 452, 568, 436, 564, 464, 532, 496, 500, 532, 464, 536, 460, 540, 456, 540, 460, 536, 460, 536, 460, 536, 460, 536, 460, 540, 456, 540, 456, 540, 460, 536, 460, 536, 488, 452, 544, 428, 568, 436, 564, 460, 536, 524, 472, 532, 464, 536, 460, 536, 460, 540, 460, 536, 460, 536, 460, 536, 460, 536, 460, 540, 456, 540, 456, 540, 460, 536, 488, 508, 488, 452, 544, 536, 2916, 3064, 8920, 488, 1504, 556, 468, 536, 460, 540, 456, 540, 456, 540, 456, 540, 460, 536, 460, 540, 456, 540, 1452, 540, 456, 540, 456, 540, 1456, 540, 484, 428, 1540, 488, 1504, 556, 468, 536, 1428, 568, 1428, 564, 1428, 564, 1432, 560, 1436, 556, 1456, 540, 1456, 536, 1456, 452, 572, 436, 560, 464, 532, 496, 1472, 564, 1432, 564, 1428, 564, 456, 540, 456, 540, 460, 536, 460, 540, 456, 540, 456, 540, 456, 540, 460, 536, 488, 512, 1456, 452, 1540, 516, 504, 528, 1440, 564, 1432, 564, 456, 540, 456, 540, 456, 540, 460, 536, 460, 540, 456, 540, 456, 540, 1452, 540, 1456, 536, 1456, 460, 1536, 564}; //AnalysIR Batch Export (IRremote) - RAW
  irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz); //Note the approach used to automatically calculate the size of the array.
}


