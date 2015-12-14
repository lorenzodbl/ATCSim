/*
 * AirController.h
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef AIRCONTROLLER_H_
#define AIRCONTROLLER_H_

#include "Singleton.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include "Storm.h"
#include <list>

class AirController: public Singleton<AirController> {
public:
	AirController();
	virtual ~AirController();

	void WaitingRoute(Flight *f);
	void LandingRoute(Flight *f);
	void AvoidStorm(Storm s, Flight *f);
	bool CheckMinimumDist(Storm s, Flight *f);


	void doWork();
/*private:
bool ruta_ocupada;*/
};

#endif /* AIRCONTROLLER_H_ */
