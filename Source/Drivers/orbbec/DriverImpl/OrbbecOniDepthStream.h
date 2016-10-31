/*****************************************************************************
*									     *
*  OpenNI 2.x Alpha							     *
*  Copyright (C) 2012 PrimeSense Ltd.					     *
*									     *
*  This file is part of OpenNI. 					     *
*									     *
*  Licensed under the Apache License, Version 2.0 (the "License");	     *
*  you may not use this file except in compliance with the License.	     *
*  You may obtain a copy of the License at				     *
*									     *
*      http://www.apache.org/licenses/LICENSE-2.0			     *
*									     *
*  Unless required by applicable law or agreed to in writing, software	     *
*  distributed under the License is distributed on an "AS IS" BASIS,	     *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
*  See the License for the specific language governing permissions and	     *
*  limitations under the License.					     *
*									     *
*****************************************************************************/
#ifndef ORBBECONIDEPTHSTREAM_H
#define ORBBECONIDEPTHSTREAM_H

//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#include "OrbbecOniMapStream.h"
#include "../Sensor/XnSensor.h"

//---------------------------------------------------------------------------
// Types
//---------------------------------------------------------------------------
class OrbbecOniDepthStream :
	public OrbbecOniMapStream
{
public:
	OrbbecOniDepthStream(XnSensor* pSensor, OrbbecOniDevice* pDevice);
	virtual OniStatus getProperty(int propertyId, void* data, int* pDataSize);
	virtual OniBool isPropertySupported(int propertyId);
	virtual void notifyAllProperties();
	virtual OniStatus convertDepthToColorCoordinates(StreamBase* colorStream, int depthX, int depthY, OniDepthPixel depthZ, int* pColorX, int* pColorY);
};

#endif // OrbbecOniDEPTHSTREAM_H
