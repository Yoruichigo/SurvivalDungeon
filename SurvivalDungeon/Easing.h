#pragma once

/*
	Easing関数
	緩急の計算に使えます
	
	http://easings.net/ja 動きの参考に
*/

#include <iostream>

namespace Easing
{

#define PI		(3.14159265)
#define RAD90	(90.0)

	static double InQuad(double t, double totaltime, double max = 1.0 , double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		return max*t*t + min;
	}
	static double OutQuad(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		return -max*t*(t - 2) + min;
	}
	static double InOutQuad(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		if(t / 2 < 1)
			return max / 2 * t * t + min;
		--t;
		return -max * (t * (t - 2) - 1) + min;
	}
	static double InCubic(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		return max * t*t*t + min;
	}
	static double OutCubic(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t = t / totaltime - 1;
		return max * (t*t*t + 1) + min;
	}
	static double InOutCubic(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		if(t / 2 < 1)
			return max / 2 * t*t*t + min;
		t -= 2;
		return max / 2 * (t*t*t + 2) + min;
	}
	static double InQuart(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		return max * t*t*t*t + min;
	}
	static double OutQuart(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t = t / totaltime - 1;
		return -max*(t*t*t*t - 1) + min;
	}
	static double InOutQuart(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		if(t / 2 < 1)
			return max / 2 * t*t*t*t + min;
		t -= 2;
		return -max / 2 * (t*t*t*t - 2) + min;
	}
	static double InQuint(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		return max*t*t*t*t*t + min;
	}
	static double OutQuint(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t = t / totaltime - 1;
		return max*(t*t*t*t*t + 1) + min;
	}
	static double InOutQuint(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		if(t / 2 < 1)
			return max / 2 * t*t*t*t*t + min;
		t -= 2;
		return max / 2 * (t*t*t*t*t + 2) + min;
	}
	static double InSine(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		return -max*cos(t*RAD90 / totaltime) + max + min;
	}
	static double OutSine(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		return max * sin(t*RAD90 / totaltime) + min;
	}
	static double InOutSine(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		return -max / 2 * (cos(t*PI / totaltime) - 1) + min;
	}
	static double InExp(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		return t == 0.0 ? min : max*pow(2, 10 * (t / totaltime - 1)) + min;
	}
	static double OutExp(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		return t == totaltime ? max + min : max*(-pow(2, -10 * t / totaltime) + 1) + min;
	}
	static double InOutExp(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		if(t == 0.0)
			return min;
		if(t == totaltime)
			return max;
		max -= min;
		t /= totaltime;

		if(t / 2 < 1)
			return max / 2 * pow(2, 10 * (t - 1)) + min;
		--t;
		return max / 2 * (-pow(2, -10 * t) + 2) + min;

	}
	static double InCirc(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		return -max*(sqrt(1 - t*t) - 1) + min;
	}
	static double OutCirc(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t = t / totaltime - 1;
		return max*sqrt(1 - t*t) + min;
	}
	static double InOutCirc(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		if(t / 2 < 1)
			return -max / 2 * (sqrt(1 - t*t) - 1) + min;
		t -= 2;
		return max / 2 * (sqrt(1 - t*t) + 1) + min;
	}
	static double InBack(double t, double totaltime, double s, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;
		return max*t*t*((s + 1)*t - s) + min;
	}
	static double OutBack(double t, double totaltime, double s, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t = t / totaltime - 1;
		return max*(t*t*((s + 1)*t*s) + 1) + min;
	}
	static double InOutBack(double t, double totaltime, double s, double max = 1.0, double min = 0.0)
	{
		max -= min;
		s *= 1.525;
		if(t / 2 < 1)
		{
			return max*(t*t*((s + 1)*t - s)) + min;
		}
		t -= 2;
		return max / 2 * (t*t*((s + 1)*t + s) + 2) + min;
	}
	static double OutBounce(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		max -= min;
		t /= totaltime;

		if(t < 1 / 2.75)
			return max*(7.5625*t*t) + min;
		else if(t < 2 / 2.75)
		{
			t -= 1.5 / 2.75;
			return max*(7.5625*t*t + 0.75) + min;
		}
		else if(t < 2.5 / 2.75)
		{
			t -= 2.25 / 2.75;
			return max*(7.5625*t*t + 0.9375) + min;
		}
		else
		{
			t -= 2.625 / 2.75;
			return max*(7.5625*t*t + 0.984375) + min;
		}
	}
	static double InBounce(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		return max - OutBounce(totaltime - t, totaltime, max - min, 0) + min;
	}
	static double InOutBounce(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		if(t < totaltime / 2)
			return InBounce(t * 2, totaltime, max - min, max)*0.5 + min;
		else
			return OutBounce(t * 2 - totaltime, totaltime, max - min, 0)*0.5 + min + (max - min)*0.5;
	}
	static double Linear(double t, double totaltime, double max = 1.0, double min = 0.0)
	{
		return (max - min)*t / totaltime + min;
	}

}