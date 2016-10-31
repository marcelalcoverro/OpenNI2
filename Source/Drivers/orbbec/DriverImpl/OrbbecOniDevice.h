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
#ifndef ORBBECONIDEVICE_H
#define ORBBECONIDEVICE_H

//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#include <Driver/OniDriverAPI.h>
#include <XnLib.h>
#include "OrbbecOniDepthStream.h"
#include "OrbbecOniColorStream.h"
#include "OrbbecOniIRStream.h"
#include "../Sensor/XnSensor.h"

//---------------------------------------------------------------------------
// Types
//---------------------------------------------------------------------------

class OrbbecOniStream;
class OrbbecOniDriver;

class OrbbecOniDevice :
	public oni::driver::DeviceBase
{
public:
	OrbbecOniDevice(const char* uri, oni::driver::DriverServices& driverServices, OrbbecOniDriver* pDriver);
	virtual ~OrbbecOniDevice();

	XnStatus Init(const char* mode);

	OniDeviceInfo* GetInfo() { return &m_info; }

	OniStatus getSensorInfoList(OniSensorInfo** pSensors, int* numSensors);

	oni::driver::StreamBase* createStream(OniSensorType sensorType);
	void destroyStream(oni::driver::StreamBase* pStream);

	virtual OniStatus getProperty(int propertyId, void* data, int* pDataSize);
	virtual OniStatus setProperty(int propertyId, const void* data, int dataSize);
	virtual OniBool isPropertySupported(int propertyId);
	virtual void notifyAllProperties();

	virtual OniStatus EnableFrameSync(OrbbecOniStream** pStreams, int streamCount);
	virtual void DisableFrameSync();

	virtual OniBool isImageRegistrationModeSupported(OniImageRegistrationMode mode);

	XnSensor* GetSensor()
	{
		return &m_sensor;
	}

	OrbbecOniDriver* GetDriver()
	{
		return m_pDriver;
	}

private:
	XnStatus FillSupportedVideoModes();

	OniDeviceInfo m_info;
	int m_numSensors;
	OniSensorInfo m_sensors[10];
	oni::driver::DriverServices& m_driverServices;
	XnSensor m_sensor;
	OrbbecOniDriver* m_pDriver;
};

#endif // OrbbecOniDEVICE_H
