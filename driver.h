/*
 * driver.h
 *
 *  Created on: Nov 14, 2014
 *      Author: joe--ngigi
 */

#include "systemc"

SC_MODULE(driver){
	sc_out<bool>d_a,d_b;
	sc_uint<2> count;
	void prc_drive_a(){
		count=0;
		while(1){
			if(count>3)
				count=0;
			cout<<"Count is: "<<count<<endl;
			cout<<"Count[0] is: "<<count[0]<<endl;
			cout<<"Count[1] is: "<<count[1]<<endl;
			d_a=count[0];
			d_b=count[1];
			wait(5,SC_NS);
			count++;

		}

	}

	SC_CTOR(driver){
		SC_THREAD(prc_drive_a);
	}
	};



