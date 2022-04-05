#include <iostream>

void p2_efficiency(float miles, float gallons)
{
	float efficiency = miles/gallons;
	float l_every_hundred_km = (gallons*3.785 / (miles*1.609344)) * 100;
	std::cout <<"efficiency is "<<efficiency<<"mi/gal, equal to "
	<<l_every_hundred_km<<"l /km\n";
}





int main()
{
	p2_efficiency(394.5707, 15.059444);

	return 0;
}


