/*****************************************************************************
*                                                                            *
*  OpenNI 2.x Alpha                                                          *
*  Copyright (C) 2012 PrimeSense Ltd.                                        *
*                                                                            *
*  This file is part of OpenNI.                                              *
*                                                                            *
*  Licensed under the Apache License, Version 2.0 (the "License");           *
*  you may not use this file except in compliance with the License.          *
*  You may obtain a copy of the License at                                   *
*                                                                            *
*      http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                            *
*  Unless required by applicable law or agreed to in writing, software       *
*  distributed under the License is distributed on an "AS IS" BASIS,         *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
*  See the License for the specific language governing permissions and       *
*  limitations under the License.                                            *
*                                                                            *
*****************************************************************************/
//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#ifndef __PS1080_DRIV_EXPORT
#define __PS1080_DRIV_EXPORT

#include "XnOniDriver.h"

//---------------------------------------------------------------------------
// XnOniDriver EXPORT
//---------------------------------------------------------------------------
ONI_EXPORT_DRIVER(XnOniDriver, XnOniDriver);

// The following line is needed to be once in *ALL* of the high level shared library modules. DO NOT REMOVE!!! 
XN_API_EXPORT_INIT()

#endif // __PS1080_DRIV_EXPORT
