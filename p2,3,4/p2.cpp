#include <iostream>

void p2_efficiency(float miles, float gallons)
{
	float efficiency = miles/gallons;
	float l_every_hundred_km = (gallons*3.785 / (miles*1.609344)) * 100;
	std::cout <<"efficiency is "<<efficiency<<"mi/gal, equal to "
	<<l_every_hundred_km<<"l /km\n";
}

void p3_height(float feet, float inches)
{
	float result = inches*2.54 + feet*30.48;
	std::cout << inches << " inches and " << feet 
	<< " feet equals " << result << " cm\n";

}

void p4_british(float p, float c, int l)
{
	float result = (c/20) + (p/240) + l/1;
	std::cout <<p<<" d(peniques) "<<c<<" s(cheniques) "<<l
	<<" l(libras) equals to "<<result<< "l in today's money system\n";
}


int main()
{
	p2_efficiency(394.5707, 15.059444);
	p3_height(6, 5);
	p4_british(6, 10, 20);
	return 0;
}




