#pragma once
struct fsize 
{
	float height, width;
};

struct point
{
	float x, y;
};

struct rectangle 
{

	point l_up;//y - max x-min
	point r_down;//y - min x-max
};

