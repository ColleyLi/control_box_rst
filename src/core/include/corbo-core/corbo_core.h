/*********************************************************************
 *
 *  Software License Agreement
 *
 *  Copyright (c) 2020,
 *  TU Dortmund - Institute of Control Theory and Systems Engineering.
 *  All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 *  Authors: Christoph Rösmann
 *********************************************************************/

#ifndef SRC_CORE_INCLUDE_CORBO_CORE_CORBO_CORE_H_
#define SRC_CORE_INCLUDE_CORBO_CORE_CORBO_CORE_H_

#include <corbo-core/console.h>
#include <corbo-core/data_exporter_interface.h>
#include <corbo-core/global.h>
#include <corbo-core/reference_trajectory.h>
#include <corbo-core/signals.h>
#include <corbo-core/time.h>
#include <corbo-core/tsv_export.h>
#include <corbo-core/types.h>
#include <corbo-core/utilities.h>

#ifdef YAML_SUPPORT
#include <corbo-core/yaml_export.h>
#endif

#endif  // SRC_CORE_INCLUDE_CORBO_CORE_CORBO_CORE_H_
