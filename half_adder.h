/*
 * half_adder.h
 *
 *  Created on: Nov 14, 2014
 *      Author: joe--ngigi
 */

#include "systemc"

SC_MODULE (half_adder) {
	sc_in<bool>a,b;
	sc_out<bool>s,c;

	void prc_half_adder(){
		 	 	 	c= a & b;
		 	 	 	s= a ^ b;
		}
		SC_CTOR(half_adder) {
		    SC_METHOD (prc_half_adder);
		    sensitive << a << b;
		  }
		};




