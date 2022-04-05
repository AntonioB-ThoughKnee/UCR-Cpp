#include <iostream>

void p2_efficiency(float miles, float gallons)
{
	float efficiency = miles/gallons;
	float l_every_hundred_km = gallons*3.785;
	std::cout <<"efficiency is "<<efficiency<<"mi/gal, equal to "
	<<l_every_hundred_km<<"l /km\n";
}





int main()
{



	return 0;
}


