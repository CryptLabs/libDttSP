/*
 * This file is part of ExpertSDR
 *
 * ExpertSDR is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * ExpertSDR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 *
 * Copyright (C) 2012 Valery Mikhaylovsky
 * The authors can be reached by email at maksimus1210@gmail.com
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <QCoreApplication>
#include <windows.h>


class Timer
{
	bool	available;
	double	minMicroSecondsLatency;
	double	normMicroSecondsLatency;

	LARGE_INTEGER frequency;
	LARGE_INTEGER startCount;
	LARGE_INTEGER count;

public:
	Timer();

	void start();
	double getMicroSeconds();
	double getMilliSeconds();
	double getSeconds();

private:
	void init();
	void calcLatency();
};

#endif /* TIMER_H_ */
