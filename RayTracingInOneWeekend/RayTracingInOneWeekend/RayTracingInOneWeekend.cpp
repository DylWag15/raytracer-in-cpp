// RayTracingInOneWeekend.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int main()
{
	int imageWidth = 256;
	int imageHeight = 256;

	std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

	for (int j = 0; j < imageHeight; ++j)
	{
		std::clog << "\rScanlines remaining: " << (imageHeight - j) << ' ' << std::flush;
		for (int i = 0; i < imageWidth; ++i)
		{
			auto r = double(i) / (imageWidth - 1);
			auto g = double(j) / (imageHeight - 1);
			auto b = 0.0;

			auto ir = static_cast<int>(255.999 * r);
			auto ig = static_cast<int>(255.999 * g);
			auto ib = static_cast<int>(255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << "\n";
		}
	}

	std::clog << "\nDone.\n";
}