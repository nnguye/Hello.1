/*
Programmer's Name: Nhien Nguyen
NUID: 70430762
Date: 1/23/2020
Description of the program: calculate air distance
*/
#include <stdio.h>
#include <math.h>

int main(void) {
	
	double latitudeA, longtitudeA
	printf("Enter latitudeA");
	scanf("%lf", &latitudeA);
	printf("Enter longtitudeA");
	scanf("%lf", &longtitudeA);
	double latitudeB, longtitudeB
	printf("Enter latitudeB");
	scanf("%lf", &latitudeB);
	printf("Enter longtitudeB");
	scanf("%lf", &longtitudeB);
	
	
	
	
	//convert degree to radian
	double firstRadianLatitude;
	firstRadianLatitude=(latitudeA/180)*M_PI;
	double firstRadianLongtitude;
	firstRadianLongtitude=(longtitudeA/180)*M_PI;
	double secondRadianLatitude
	secondRadianLatitude=(latitudeB/180)*M_PI;
	double secondRadianLongtitude
	secondRadianLongtitude=(longtitudeB/180)*M_PI;
	double different between firstRadianLongtitude and secondRadianLongtitude;
	the different=secondRadianLongtitude-firstRadianLongtitude;
	//the distance d
	double d= acos(sin(firstRadianA)sin(secondRadianB)+cos(firstRadianA)cos(seconRadianB)cos(the different)radius;
	printf("d\n", the distance d);
	scanf("%lf",&the distance d);

	
	return 0;
}