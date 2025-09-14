/*
 * nmea.h
 *
 *  Created on: Aug 9, 2025
 *      Author: user
 */

#ifndef NMEA_HPP_
#define NMEA_HPP_
#include"string.h"
#include <iostream>
#include"string.h"




namespace GPS {


    typedef struct {
    	int hour;
    	int min;
    	int sec;
    }UTCTIME;

    typedef struct {
    	float latitude;
    	char NS;
    	float longitude;
    	char EW;
    }LOCATION;

    typedef struct {
    	float altitude;
    	char unit;
    }ALTITUDE;

   typedef struct {
	   UTCTIME time;
	   LOCATION loCation;
	   ALTITUDE alTitude;
	   float HDOP ;
	   int SatUsed,PosFix ;
	   char M;

   }GGASTRUCT;

   int decodeGGA (std::string *GgaBuffer , GGASTRUCT *gga);


} // end using name space

#endif /* NMEA_HPP_ */
